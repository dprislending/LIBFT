/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:41:26 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/12 18:25:17 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	int		len_to;

	len_to = ft_strlen(to_find);
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)src);
	while (src[i] && to_find[j] && i < len)
	{
		j = 0;
		while (src[i] == to_find[j])
		{
			i++;
			j++;
		}
		i++;
	}
	if (to_find[j] == '\0')
		return ((char *)(src + i - 1 - len_to));
	return (NULL);
}
/*
int	main(void)
{
	const char	src[] = "Reine de Jordanie";
	const char	to_find[] = "hello";

	printf("%s", ft_strnstr(src, to_find, 100));
}
*/