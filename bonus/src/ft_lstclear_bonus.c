/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:30:02 by momari            #+#    #+#             */
/*   Updated: 2024/01/30 08:24:38 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	del(int data)
{
	data = 0;
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*current;
	t_stack	*tmp;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		del(tmp->index);
		free(tmp);
		tmp = NULL;
	}
	*lst = current;
}
