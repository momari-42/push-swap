/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils1_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:39:50 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 07:59:01 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_sorted(t_stack *stack)
{
	int		tmp;
	t_stack	*current;

	if (ft_lstsize(stack) <= 1)
		return (1);
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

void	ft_print_message(int n)
{
	if (n == -1)
		ft_putendl_fd("KO", 1);
	else
		ft_putendl_fd("OK", 1);
	exit(0);
}

void	ft_print_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

t_instraction	*ft_lstnew_in(char *content)
{
	t_instraction	*newnode;

	newnode = (t_instraction *)malloc(sizeof(t_instraction));
	if (newnode == NULL)
		return (NULL);
	newnode->content = ft_strdup(content);
	newnode->next = NULL;
	return (newnode);
}

void	ft_lstadd_back_in(t_instraction **lst, t_instraction *new)
{
	t_instraction	*current;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
