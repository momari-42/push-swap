/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_003.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:32:45 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 08:17:02 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_003(t_stack **a)
{
	if (ft_lstsize(*a) <= 2)
	{
		if (ft_is_sorted(*a) == -1)
			swap(a, 'a');
		return ;
	}
	while (ft_is_sorted(*a) != 1)
	{
		if ((*a)->content > (*a)->next->content)
			swap(a, 'a');
		if ((*a)->next->content > (*a)->next->next->content)
			reverse_rotate(a, 'a');
	}
}
