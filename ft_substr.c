/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:11:02 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/10 19:21:12 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lens;
	size_t	lenf;
	char	*dest;

	i = 0;
	lens = ft_strlen(s);
	if (len + start <= lens)
		lenf = len;
	else
		lenf = lens - start;
	dest = (char *)malloc((lenf + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (i < lenf)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include	<stdio.h>

int	main(void)
{
	char	s[] = "abcdefghijklmnop";

	printf("%s\n", ft_substr(s, 4, 10));
}
*/