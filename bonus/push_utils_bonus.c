/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:39:50 by momari            #+#    #+#             */
/*   Updated: 2024/02/02 15:11:48 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	reverse_rotate(t_stack **stack)
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
}

void	reverse_rotate_ab(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}

static int	ft_check(t_stack *a, int tmp)
{
	t_stack	*current;

	if (!a)
		return (0);
	current = a;
	while (current)
	{
		if (current->content == tmp)
			return (-1);
		current = current->next;
	}
	return (0);
}

void	ft_fillstack(char **av, int ac, t_stack **a)
{
	int		i;
	int		j;
	long	tmp;
	char	**str;

	i = 1;
	while (i < ac)
	{
		j = 0;
		str = ft_split(av[i], ' ');
		if (!str[0])
			ft_print_error();
		while (str[j])
		{
			tmp = ft_atoi(str[j]);
			if (ft_check(*a, tmp) == -1)
				ft_print_error();
			ft_lstadd_back(a, ft_lstnew(tmp));
			j++;
		}
		ft_free(str, j);
		i++;
	}
}

void	ft_chech_action(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp((const char *)str, "sa\n") == 0)
		swap(a);
	else if (ft_strcmp((const char *)str, "sb\n") == 0)
		swap(b);
	else if (ft_strcmp((const char *)str, "ss\n") == 0)
		swap_ab(a, b);
	else if (ft_strcmp((const char *)str, "pa\n") == 0)
		push(b, a);
	else if (ft_strcmp((const char *)str, "pb\n") == 0)
		push(a, b);
	else if (ft_strcmp((const char *)str, "ra\n") == 0)
		rotat(a);
	else if (ft_strcmp((const char *)str, "rb\n") == 0)
		rotat(b);
	else if (ft_strcmp((const char *)str, "rr\n") == 0)
		rotat_ab(a, b);
	else if (ft_strcmp((const char *)str, "rra\n") == 0)
		reverse_rotate(a);
	else if (ft_strcmp((const char *)str, "rrb\n") == 0)
		reverse_rotate(b);
	else if (ft_strcmp((const char *)str, "rrr\n") == 0)
		reverse_rotate_ab(a, b);
	else
		ft_print_error();
}
