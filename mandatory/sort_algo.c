/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:54:07 by momari            #+#    #+#             */
/*   Updated: 2024/02/04 14:34:40 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_algo(t_stack **a, t_stack **b)
{
	int	last_p;
	int	pivot1;
	int	pivot2;

	pivot2 = 0;
	last_p = -1;
	while (ft_lstsize(*a) > 3)
	{
		pivot1 = (ft_lstsize(*a) / 6) + pivot2;
		pivot2 += ft_lstsize(*a) / 3;
		while (ft_lstsize(*b) < pivot2)
		{
			if (*b && (*a)->index >= pivot2
				&& (*b)->index >= last_p && (*b)->index < pivot1)
				rotat_ab(a, b);
			else if (*b && (*b)->index >= last_p && (*b)->index < pivot1)
				rotat(b, 'b');
			if ((*a)->index >= pivot2)
				rotat(a, 'a');
			else if ((*a)->index < pivot2)
				push(a, b, 'b');
		}
		last_p = pivot1;
	}
	ft_sort_003(a);
	ft_flip_b_to_a(a, b);
	while (ft_is_sorted(*a) == -1)
		reverse_rotate(a, 'a');
}

void	reverse_rotate(t_stack **stack, char c)
{
	t_stack	*current1;
	t_stack	*current2;
	t_stack	*current3;

	if (ft_lstsize(*stack) < 2)
		return ;
	current1 = *stack;
	current3 = *stack;
	current2 = ft_lstlast(current3);
	while (current1->next->next)
		current1 = current1->next;
	current1->next = NULL;
	current2->next = current3;
	*stack = current2;
	if (c == 'a')
		ft_putendl_fd("rra", 1);
	else if (c == 'b')
		ft_putendl_fd("rrb", 1);
}

void	reverse_rotate_ab(t_stack **a, t_stack **b)
{
	reverse_rotate(a, 's');
	reverse_rotate(b, 's');
	ft_putendl_fd("rrr", 1);
}
