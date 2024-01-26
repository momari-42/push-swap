/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:35:00 by momari            #+#    #+#             */
/*   Updated: 2024/01/24 04:18:51 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct s_stack
{
	int             content;
	int				index;
	struct s_stack	*next;
}	t_stack;

char	**ft_split(char const *s, char c);
char	**ft_free(char **newstr, int j);
t_stack	*ft_lstnew(int content);
long	ft_atoi(const char *str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void 	ft_fillStack (char **av, int ac, t_stack **a);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_print_error();
int		ft_check(t_stack *a, int tmp);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
int	ft_lstsize(t_stack *lst);
void	ft_lstiter(t_stack *lst, int data, int size);

void swap(t_stack **ab, char c);
void push(t_stack **a, t_stack **b, char c);
void rotat(t_stack **stack, char c);
void reverse_rotate(t_stack **stack, char c);
void swap_ab(t_stack **a, t_stack **b);
void rotat_ab(t_stack **a, t_stack **b);
void reverse_rotate_ab(t_stack **a, t_stack **b);
void ft_sort_003(t_stack **a);
void ft_sort(t_stack **a, t_stack **b);
void ft_indexStack(t_stack **stack);
#endif