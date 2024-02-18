/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:14:59 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 07:55:33 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_check_instraction(char *str)
{
	if (ft_strcmp((const char *)str, "sa\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "sb\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "ss\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "pa\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "pb\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "ra\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "rb\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "rr\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "rra\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "rrb\n") == 0)
		;
	else if (ft_strcmp((const char *)str, "rrr\n") == 0)
		;
	else
		ft_print_error();
}

void	ft_applicate_actions(t_stack *a, t_stack *b, t_instraction *in)
{
	t_instraction	*tmp;

	tmp = in;
	while (tmp)
	{
		ft_chech_action(&a, &b, tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear_in(&in);
	if (ft_is_sorted(a) == -1 || ft_lstsize(b) != 0)
		ft_print_message(-1);
	ft_print_message(1);
}

int	main(int ac, char **av)
{
	char			*str;
	t_stack			*a;
	t_stack			*b;
	t_instraction	*in;

	b = NULL;
	in = NULL;
	if (ac > 1)
	{
		ft_fillstack(av, ac, &a);
		str = get_next_line(0);
		while (str)
		{
			ft_lstadd_back_in(&in, ft_lstnew_in(str));
			ft_check_instraction(str);
			free(str);
			str = get_next_line(0);
		}
		if (str)
			free(str);
		ft_applicate_actions(a, b, in);
	}
}
