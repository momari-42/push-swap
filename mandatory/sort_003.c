/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_003.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:32:45 by momari            #+#    #+#             */
/*   Updated: 2024/01/24 23:42:06 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_getindex(int *index, t_stack *a)
{
    int     i;
    int     min;
    int     max;
    t_stack *current1;

    i   = 0;
    current1 = a;
    min = current1->content;
    max = current1->content;
    index[0] = 0;
    index[1] = 0;
    while (current1)
    {
        if (current1->content < min)
        {
            min = current1->content;
            index[0] = i;
        }
        if (current1->content > max)
        {
            max = current1->content;
            index[1] = i;
        }
        i++;
        current1 = current1->next;
    }
}

void ft_sort_003(t_stack **a)
{
    int index[2];

    ft_getindex(index, *a);
    if (index[0] == 1 && index[1] == 0)
    {
        reverse_rotate(a, 'a');
        reverse_rotate(a, 'a');
    }
    else
    {   
        if (index[1] == 1 && index[0] == 0)
        {
            reverse_rotate(a, 'a');
            index[0] = 1;
        }
        if (index[1] == 0 || index[0] == 1)
            swap(a, 'a');
        if (index[0] == 2)
            reverse_rotate(a, 'a');
    }
}
