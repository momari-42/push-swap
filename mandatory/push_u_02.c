/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_u_02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:09:12 by momari            #+#    #+#             */
/*   Updated: 2024/02/09 15:57:21 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_flip_b_to_a(t_stack **a, t_stack **b)
{
	int	index;
	int	last_index_a;
	int	last_index_b;

	while (ft_lstsize(*b) > 0)
	{
		index = ft_return_index(*b, (*a)->index - 1);
		last_index_a = ft_index_of_last(*a);
		last_index_b = ft_index_of_last(*b);
		if (ft_check_if(a, b, last_index_a, last_index_b) == 1)
			;
		else if (last_index_a < last_index_b)
		{
			reverse_rotate(b, 'b');
			push(b, a, 'a');
			rotat(a, 'a');
		}
		else if (last_index_a == (*a)->index - 1)
			reverse_rotate(a, 'a');
		else if (index != -1 && index < (ft_lstsize(*b) / 2))
			rotat(b, 'b');
		else
			reverse_rotate(b, 'b');
	}
}

int	ft_return_index(t_stack *stack, int index)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = stack;
	while (current)
	{
		if (current->index == index)
			return (i);
		i++;
		current = current->next;
	}
	return (-1);
}

int	ft_index_of_last(t_stack *stack)
{
	t_stack	*current;

	current = ft_lstlast(stack);
	return (current->index);
}

int	ft_findmax(t_stack *a)
{
	int		max;
	int		data;
	t_stack	*current;

	current = a;
	data = current->content;
	max = current->index;
	current = current->next;
	while (current)
	{
		if (current->content > data)
		{
			data = current->content;
			max = current->index;
		}
		current = current->next;
	}
	return (max);
}

int	ft_is_sorted(t_stack *stack)
{
	int		tmp;
	t_stack	*current;

	current = stack;
	tmp = current->content;
	current = current->next;
	while (current)
	{
		if (tmp > current->content)
			return (-1);
		tmp = current->content;
		current = current->next;
	}
	return (1);
}
