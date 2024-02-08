CFLALGS = -Wall -Wextra -Werror
NAME = push_swap
NAME_BONUS = checker
CC = cc

1 = \033[1;31m
2 = \033[1;32m
3 = \033[1;33m
4 = \033[1;34m
5 = \033[1;35m
6 = \033[1;36m
7 = \033[1;37m

SRC =		mandatory/src/ft_lstadd_front.c mandatory/src/ft_lstclear.c \
			mandatory/src/ft_putendl_fd.c mandatory/src/ft_putstr_fd.c \
			mandatory/src/ft_memcpy.c mandatory/src/ft_putchar_fd.c	  \
			mandatory/src/ft_atoi.c	mandatory/src/ft_lstadd_back.c	 \
			mandatory/src/ft_lstiter.c mandatory/src/ft_lstlast.c   \
			mandatory/src/ft_lstnew.c mandatory/src/ft_lstsize.c   \
			mandatory/src/ft_strlen.c mandatory/src/ft_substr.c	  \
			mandatory/src/ft_split.c mandatory/src/ft_strdup.c	 \
			mandatory/actions_ab.c mandatory/push_u_01.c		\
			mandatory/push_u_02.c mandatory/sort_003.c		   \
			mandatory/sort_005.c mandatory/sort_algo.c		  \
			push_swap.c


BSRC =		bonus/src/ft_lstadd_front_bonus.c bonus/src/ft_lstclear_bonus.c	\
			bonus/src/ft_putendl_fd_bonus.c bonus/src/ft_putstr_fd_bonus.c \
			bonus/src/ft_memcpy_bonus.c bonus/src/ft_putchar_fd_bonus.c	  \
			bonus/src/ft_atoi_bonus.c bonus/src/ft_lstadd_back_bonus.c	 \
			bonus/src/ft_lstiter_bonus.c bonus/src/ft_lstlast_bonus.c	\
			bonus/src/ft_strlen_bonus.c bonus/src/ft_strcmp_bonus.c   \
			bonus/src/ft_lstnew_bonus.c bonus/src/ft_lstsize_bonus.c  \
			bonus/src/ft_split_bonus.c bonus/src/ft_strdup_bonus.c   \
			bonus/src/ft_substr_bonus.c	bonus/src/g_n_l_u_bonus.c   \
			bonus/push_utils_bonus.c bonus/push_utils1_bonus.c     \
			bonus/src/g_n_l_bonus.c	bonus/actions_ab_bonus.c	  \
			bonus/push_swap_bonus.c bonus/src/ft_lstclearin_bonus.c

OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)

all: $(NAME)

%bonus.o: %bonus.c bonus/push_swap_bonus.h
	@$(CC) $(CFLALGS) -c $< -o $@
	@echo "$(3) Compiling object files ..."

%.o: %.c push_swap.h
	@$(CC) $(CFLALGS) -c $< -o $@
	@echo "$(3) Compiling object files ..."

$(NAME): $(OBJS)
	@$(CC) $(CFLALGS) $^ -o $(NAME)
	@echo "$(2) Compiling is Done !!"

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(BOBJS)
	@$(CC) $(CFLALGS) $^ -o $(NAME_BONUS)

clean:
	@rm -rf $(OBJS) $(BOBJS)

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS) $(OBJS) $(BOBJS)

re: fclean all