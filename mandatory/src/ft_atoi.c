/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:38:25 by momari            #+#    #+#             */
/*   Updated: 2024/01/19 16:36:05 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// static int	ft_gameover(int sign)
// {
// 	if (sign < 0)
// 		return (0);
// 	return (-1);
// }

long	ft_atoi(const char *str)
{
	long			temp;
	long			pos;
	long			i;

	i = 0;
	temp = 0;
	pos = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_print_error();
		if (((10 * temp) + (str[i] - '0')) > INT_MAX || ((10 * temp) + (str[i] - '0')) * pos < INT_MIN)
			ft_print_error();
		temp = (10 * temp) + (str[i] - '0');
		i++;
	}
	return (temp * pos);
}
