/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_003.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:32:45 by momari            #+#    #+#             */
/*   Updated: 2024/02/01 21:54:10 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// static void	ft_getindex(int *index, t_stack *a)
// {
// 	int		i;
// 	int		min;
// 	int		max;
// 	t_stack	*current1;

// 	i = 0;
// 	current1 = a;
// 	min = current1->content;
// 	max = current1->content;
// 	index[0] = 0;
// 	index[1] = 0;
// 	while (current1)
// 	{
// 		if (current1->content < min)
// 		{
// 			min = current1->content;
// 			index[0] = i;
// 		}
// 		if (current1->content > max)
// 		{
// 			max = current1->content;
// 			index[1] = i;
// 		}
// 		i++;
// 		current1 = current1->next;
// 	}
// }

void	ft_sort_003(t_stack **a)
{
	while (ft_is_sorted(*a) != 1)
	{
		if ((*a)->content > (*a)->next->content)
			swap(a, 'a');
		if ((*a)->next->content > (*a)->next->next->content)
			reverse_rotate(a, 'a');
	}
	
}
