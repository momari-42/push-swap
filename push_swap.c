/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:43 by momari            #+#    #+#             */
/*   Updated: 2024/01/25 06:26:44 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void f()
// {
//     system("leaks push_swap");
// }

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    if (ac < 3)
        return (1);
    ft_fillStack(av, ac, &a);
    ft_indexStack(&a);
    ft_sort(&a, &b);
    return (0);
}