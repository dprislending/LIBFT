/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:02:25 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/10 18:59:53 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return ((size_t)i);
}
/*
#include	<stdio.h>

int	main(void)
{
	const char	s[] = "Rania comme la reine de Jordanie";

	printf("%ld", ft_strlen(s));
}
*/