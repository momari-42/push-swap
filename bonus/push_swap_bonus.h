/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:15:03 by momari            #+#    #+#             */
/*   Updated: 2024/02/17 08:22:10 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_instractions
{
	char					*content;
	struct s_instractions	*next;
}	t_instraction;

int				ft_lstsize(t_stack *lst);
int				ft_allocate(char **src);
int				ft_check_fd(int fd);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_search(char *str);
int				ft_is_sorted(t_stack *stack);
long			ft_atoi(const char *str);
void			ft_lstadd_back(t_stack **lst, t_stack *new);
void			ft_lstadd_front(t_stack **lst, t_stack *new);
void			ft_lstiter(t_stack *lst, int data, int size);
void			ft_lstclear(t_stack **lst);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			swap(t_stack **ab);
void			swap_ab(t_stack **a, t_stack **b);
void			push(t_stack **a, t_stack **b);
void			rotat(t_stack **stack);
void			rotat_ab(t_stack **a, t_stack **b);
void			reverse_rotate(t_stack **stack);
void			reverse_rotate_ab(t_stack **a, t_stack **b);
void			ft_fillstack(char **av, int ac, t_stack **a);
void			ft_chech_action(t_stack **a, t_stack **b, char *str);
void			ft_print_message(int n);
void			ft_print_error(void);
char			**ft_split(char const *s, char c);
char			**ft_free(char **newstr, int j);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_createstr(char *src, char **string);
char			*ft_newbuffer(char *src);
char			*get_next_line(int fd);
char			*ft_strcpy(char *dst, char const *src, size_t len);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(const char *s);
t_stack			*ft_lstlast(t_stack *lst);
t_stack			*ft_lstnew(int content);
t_instraction	*ft_lstnew_in(char *content);
void			ft_lstadd_back_in(t_instraction **lst, t_instraction *new);
void			ft_lstclear_in(t_instraction **lst);

#endif
