/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_ab_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:47 by momari            #+#    #+#             */
/*   Updated: 2024/01/31 18:18:41 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_stack **ab)
{
	t_stack	*current;
	t_stack	*tmp;

	if (ft_lstsize(*ab) < 2)
		return ;
	current = *ab;
	tmp = current->next;
	current->next = current->next->next;
	tmp->next = current;
	*ab = tmp;
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}

void	push(t_stack **a, t_stack **b)
{
	t_stack	*current1;
	t_stack	*current2;

	if (ft_lstsize(*a) == 0)
		return ;
	current2 = *a;
	current1 = *a;
	current2 = current2->next;
	current1->next = NULL;
	ft_lstadd_front(b, current1);
	*a = current2;
}

void	rotat(t_stack **stack)
{
	t_stack	*current1;
	t_stack	*current2;

	if (ft_lstsize(*stack) < 2)
		return ;
	current1 = *stack;
	current2 = *stack;
	current2 = current2->next;
	current1->next = NULL;
	ft_lstadd_back(&current2, current1);
	*stack = current2;
}

void	rotat_ab(t_stack **a, t_stack **b)
{
	rotat(a);
	rotat(b);
}
