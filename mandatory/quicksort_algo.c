/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:37:27 by momari            #+#    #+#             */
/*   Updated: 2024/01/26 00:40:00 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_isempty(t_stack *a)
{
    if (ft_lstsize(a) == 0)
        return (0);
    return (1);    
}

int ft_checkk(int index, int *chunks, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (index == chunks[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_findmax(t_stack *a)
{
    int max;
    int data;
    t_stack *current;

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

void ft_setStackb(t_stack **b)
{
    int i;
    t_stack *current;

    i = 0;
    current = *b;
    while (current)
    {
        current->index = i;
        i++;
        current = current->next;
    }
}

void ft_sort_stacka(t_stack **a, t_stack **b)
{
    int index;

    while (ft_lstsize(*b))
    {
        ft_setStackb(b);
        index = ft_findmax(*b);
        if (index > (ft_lstsize(*b) / 2))
            while ((*b)->index != index)
                reverse_rotate(b, 'b');
        else
            while ((*b)->index != index)
                rotat(b, 'b');
        if ((*b)->index == index)
            push(b, a, 'a');
    }
}

int ft_lastindex(t_stack *stack)
{
    t_stack *current;

    current = ft_lstlast(stack);
    return (current->index);
}

int ft_searcha(t_stack *stack, int index)
{
    int i;
    t_stack *current;

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

// static void show(t_stack **a)
// {
//     t_stack *temp;

//     temp = *a;
//     while (temp)
//     {
//         printf("%d<---->%d\n", temp->index, temp->content);
//         temp = temp->next;
//     }
//     printf("\n");
// }

void ft_sorttttttt(t_stack **a, t_stack **b)
{
    int tmp;
    int index;
    // t_stack *current;

    while (ft_lstsize(*b) > 0)
    {
        tmp = (*a)->index - 1;
        index = ft_searcha(*b, tmp);
        if (((*a)->index - 1) == (*b)->index)
            push(b, a, 'a');
        else if (((*a)->index - 1) == ft_lastindex(*b))
        {
            reverse_rotate(b, 'b');
            push(b, a, 'a');
        }
        else if (ft_lastindex(*a) == ft_findmax(*a))
        {
            push(b, a, 'a');
            rotat(a, 'a');
        }
        else if (ft_lastindex(*a) < (*b)->index)
        {
            push(b, a, 'a');
            rotat(a, 'a');
        }
        else if (ft_lastindex(*a) < ft_lastindex(*b))
        {
            reverse_rotate(b , 'b');
            push(b, a, 'a');
            rotat(a, 'a');
        }
        else if (ft_lastindex(*a) == (*a)->index - 1)
            reverse_rotate(a, 'a');
        else if (index != -1 && index < (ft_lstsize(*b) / 2))
                rotat(b, 'b');
        else
                reverse_rotate(b, 'b');
         
    }
   
    
}

void ft_sort(t_stack **a, t_stack **b)
{
    int last_p;
    int pivot1;
    int pivot2;

    pivot2 = 0;
    pivot1 = 0;
    last_p = -1;
    while (ft_lstsize(*a) > 3)
    {
        pivot1 = (ft_lstsize(*a) / 6) + pivot2;
        pivot2 += ft_lstsize(*a) / 3;
        while (ft_lstsize(*b) < pivot2)
        {
            if (*b && (*a)->index >= pivot2 && (*b)->index >= last_p && (*b)->index < pivot1)
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
    ft_sorttttttt(a, b);
    // ft_sort_stacka(a, b);
}


            // if ((*a)->index < pivot2)
            // {
            //     if ((*a)->index < pivot1)
            //     {
            //         push(a, b, 'b');
            //         rotat(b, 'b');
            //     }
            //     else
            //         push(a, b, 'b');
            // }
            // else
            //     rotat(a, 'a');