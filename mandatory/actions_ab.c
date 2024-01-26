/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:47 by momari            #+#    #+#             */
/*   Updated: 2024/01/25 00:00:36 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_stack **ab, char c)
{
    t_stack *current;
    t_stack *tmp;

    if (ft_lstsize(*ab) < 2)
        return;
    current = *ab;
    tmp = current->next;
    current->next = current->next->next;
    tmp->next = current;
    *ab = tmp;
    if (c == 'a')
        ft_putendl_fd("sa", 1);
    else if (c == 'b')
        ft_putendl_fd("sb", 1);
}

void swap_ab(t_stack **a, t_stack **b)
{
    swap(a, 's');
    swap(b, 's');
    ft_putendl_fd("ss", 1);
}

void push(t_stack **a, t_stack **b, char c)
{
    t_stack *current1;
    t_stack *current2;

    current2 = *a;
    current1 = *a;
    current2 = current2->next;
    current1->next = NULL;
    ft_lstadd_front(b, current1);
    *a = current2;
    if (c == 'a')
        ft_putendl_fd("pa", 1);
    else
        ft_putendl_fd("pb", 1);
}

void rotat(t_stack **stack, char c)
{
    t_stack *current1;
    t_stack *current2;

    current1 = *stack;
    current2 = *stack;
    current2 = current2->next;
    current1->next = NULL;
    ft_lstadd_back(&current2, current1);
    *stack = current2;
    if (c == 'a')
        ft_putendl_fd("ra", 1);
    else if (c == 'b')
        ft_putendl_fd("rb", 1);  
}

void rotat_ab(t_stack **a, t_stack **b)
{
    rotat(a, 's');
    rotat(b, 's');
    ft_putendl_fd("rr", 1); 
}

void reverse_rotate(t_stack **stack, char c)
{
    t_stack *current1;
    t_stack *current2;
    t_stack *current3;

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

void reverse_rotate_ab(t_stack **a, t_stack **b)
{
    reverse_rotate(a, 's');
    reverse_rotate(b, 's');
    ft_putendl_fd("rrr", 1); 
}