/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_005.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 02:20:32 by momari            #+#    #+#             */
/*   Updated: 2024/02/01 22:14:19 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_005(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->index < 2)
			push(a, b, 'b');
		else
			rotat(a, 'a');
	}
	ft_sort_003(a);
	if ((*b)->index == 0)
		rotat(b, 'b');
	push(b, a, 'a');
	push(b, a, 'a');
}
