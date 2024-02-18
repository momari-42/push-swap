/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:43 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 16:22:10 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac >= 2)
	{
		ft_fillstack(av, ac, &a);
		if (ft_is_sorted(a) == 1)
			exit (0);
		ft_indexstack(&a);
		if (ft_lstsize(a) == 5)
			ft_sort_005(&a, &b);
		else
			ft_sort_algo(&a, &b);
		ft_lstclear(&a);
	}
	return (0);
}
