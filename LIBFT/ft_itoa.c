/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:05:06 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/19 19:09:04 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_len(int n)
{
	int			count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*tab;

	size = ft_len(n);
	tab = (char *)malloc((size + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[size--] = '\0';
	if (n == 0)
		tab[size] = '0';
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		tab[size] = ((n % 10) + '0');
		n /= 10;
		size--;
	}
	return (tab);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-12450));
}
*/
