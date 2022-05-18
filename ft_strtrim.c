/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:04:28 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/12 21:50:59 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	while (ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}
/*
#include	<stdio.h>

int	main(void)
{
	char *ptr = ft_strtrim("", "abccycvu");

	printf("%s\n", ptr);
	free(ptr);
}*/