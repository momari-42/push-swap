/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:14:59 by momari            #+#    #+#             */
/*   Updated: 2024/02/02 15:00:37 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	char	*str;
	t_stack	*a;
	t_stack	*b;
	t_instraction *in;
	t_instraction *tmp;

	in = NULL;
	if (ac > 1)
	{
		ft_fillstack(av, ac, &a);
		str = get_next_line(0);
		while (str)
		{
			ft_lstadd_back_in(&in, ft_lstnew_in(str));
			free(str);
			str = get_next_line(0);
		}
		if (str)
			free(str);
		tmp = in;
		while (tmp)
		{
			ft_chech_action(&a, &b, tmp->content);
			tmp = tmp->next;
		}
		ft_lstclear_in(&in);
		if (ft_is_sorted(a) == -1)
			ft_print_message(-1);
		ft_print_message(1);
	}
}
