/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:28 by momari            #+#    #+#             */
/*   Updated: 2024/01/20 00:24:58 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst != NULL && new != NULL)
		new->next = *lst;
	if (new != NULL)
		*lst = new;
}
