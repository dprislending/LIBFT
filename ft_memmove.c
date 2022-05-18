/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:39:07 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/12 18:25:17 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	*tmp == *(unsigned char *)dest;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			*(unsigned char *)(src + n - 1) == *(unsigned char *)(dest + n - 1);
			n--;
			src--;
			dest--;
		}
		return (tmp);
	}
}
