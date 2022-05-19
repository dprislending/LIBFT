/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:18:19 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/18 21:35:01 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (NULL);
	while (lst)
	{
		lst = lst -> next;
		len++;
	}
	return (size);
}