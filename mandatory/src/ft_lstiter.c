/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:01:01 by momari            #+#    #+#             */
/*   Updated: 2024/01/23 21:32:33 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
			return;
		}
		current = current->next;
	}
}
