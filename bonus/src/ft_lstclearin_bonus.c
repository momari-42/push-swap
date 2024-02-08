/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclearin_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:30:02 by momari            #+#    #+#             */
/*   Updated: 2024/02/02 14:59:36 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	dell(char *data)
{
	if (data)
		free(data);
}

void	ft_lstclear_in(t_instraction **lst)
{
	t_instraction	*current;
	t_instraction	*tmp;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		dell(tmp->content);
		free(tmp);
		tmp = NULL;
	}
	*lst = current;
}
