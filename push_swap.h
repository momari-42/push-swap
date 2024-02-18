/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:35:00 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 16:22:29 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		ft_lstsize(t_stack *lst);
int		ft_check(t_stack *a, int tmp);
int		ft_return_index(t_stack *stack, int index);
int		ft_index_of_last(t_stack *stack);
int		ft_findmax(t_stack *a);
int		ft_is_sorted(t_stack *stack);
int		ft_check_if(t_stack **a, t_stack **b, int last_a, int last_b);
long	ft_atoi(const char *str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstiter(t_stack *lst, int data, int size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	swap(t_stack **ab, char c);
void	swap_ab(t_stack **a, t_stack **b);
void	push(t_stack **a, t_stack **b, char c);
void	rotat(t_stack **stack, char c);
void	rotat_ab(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **stack, char c);
void	reverse_rotate_ab(t_stack **a, t_stack **b);
void	ft_print_error(void);
void	ft_fillstack(char **av, int ac, t_stack **a);
void	ft_indexstack(t_stack **stack);
void	ft_flip_b_to_a(t_stack **a, t_stack **b);
void	ft_sort_003(t_stack **a);
void	ft_sort_005(t_stack **a, t_stack **b);
void	ft_sort_algo(t_stack **a, t_stack **b);
void	ft_lstclear(t_stack **lst);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_free(char **newstr, int j);
size_t	ft_strlen(const char *s);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content);

#endif
