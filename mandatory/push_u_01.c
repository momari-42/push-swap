/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_u_01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:37:54 by momari            #+#    #+#             */
/*   Updated: 2024/01/23 22:08:29 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_print_error()
{
    ft_putendl_fd("Error", 2);
    exit(1);
}

int ft_check(t_stack *a, int tmp)
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

void ft_fillStack (char **av, int ac, t_stack **a)
{
    int i;
    int j;
    long tmp;
    char **str;

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

static int ft_getmax(t_stack *a)
{
    int     i;
    int     max;
    t_stack *current1;

    i   = 0;
    current1 = a;
    while (current1)
    {
        if (current1->index == -1)
        {
            max = current1->content;
            break;
        }
        current1 = current1->next;
    }
    while (current1)
    {
        if (current1->content > max && current1->index == -1)
            max = current1->content;
        current1 = current1->next;
    }
    return (max);
}



void ft_indexStack(t_stack **stack)
{
    int i;
    int data;
    int size;
    t_stack *current;

    i = 0;
    current = *stack;
    size = ft_lstsize(*stack);
    while (size--)
    {
        data = ft_getmax(*stack);
        ft_lstiter(*stack, data, size);
    }
}