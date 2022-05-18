/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:21:15 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/12 18:25:17 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lsrc;
	unsigned int	ldst;

	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (size == 0 || ldst > size)
		return (ldst + size);
	i = 0;
	while (src[i] && (i + ldst < size))
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[i + ldst] = '\0';
	return (ldst + lsrc);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[] = "Daniel";
	char	src[] = "Ecole";
	char	*superdst;
	int		i;

	superdst = malloc(sizeof(char) * 4);
	i = 0;
	while (dst[i])
	{
		superdst[i] = dst[i];
		i++;
	}
	printf("%ld\n", ft_strlcat(superdst, src, 11));
	printf("%s\n", superdst);
	printf("%s\n", src);
}
*/