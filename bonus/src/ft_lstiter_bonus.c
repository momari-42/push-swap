/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:01:01 by momari            #+#    #+#             */
/*   Updated: 2024/01/30 08:24:42 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_lstiter(t_stack *lst, int data, int size)
{
	t_stack	*current;

	if (!lst)
		return ;
	current = lst;
	while (current)
	{
		if (current->content == data)
		{
			current->index = size;
			return ;
		}
		current = current->next;
	}
}
