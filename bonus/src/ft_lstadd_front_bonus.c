/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:28 by momari            #+#    #+#             */
/*   Updated: 2024/01/30 08:24:34 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst != NULL && new != NULL)
		new->next = *lst;
	if (new != NULL)
		*lst = new;
}
