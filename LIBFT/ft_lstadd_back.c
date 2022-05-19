/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:26:21 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/18 21:34:20 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	ptr;

	ptr = *lst;
	if (lst)
	{
		while(lst)
			lst = lst -> next;
		lst -> next = new;
	}
	else
		lst = new;
}