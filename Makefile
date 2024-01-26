CFLALGS = -Wall -Wextra -Werror
NAME = push_swap
CC = cc

1 = \033[1;31m
2 = \033[1;32m
3 = \033[1;33m
4 = \033[1;34m
5 = \033[1;35m
6 = \033[1;36m
7 = \033[1;37m

SRC =	mandatory/src/ft_lstadd_back.c		\
			mandatory/src/ft_substr.c		\
			mandatory/src/ft_lstnew.c		\
			mandatory/src/ft_lstsize.c      \
			mandatory/src/ft_lstadd_front.c \
			mandatory/src/ft_lstiter.c      \
			mandatory/src/ft_split.c		\
			mandatory/src/ft_lstlast.c      \
			mandatory/src/ft_atoi.c			\
			mandatory/src/ft_strlen.c		\
			mandatory/src/ft_strdup.c		\
			mandatory/push_u_01.c			\
			mandatory/src/ft_memcpy.c   	\
			mandatory/src/ft_putchar_fd.c	\
			mandatory/src/ft_putendl_fd.c	\
			mandatory/src/ft_putstr_fd.c	\
			mandatory/actions_ab.c          \
			mandatory/sort_003.c			\
			mandatory/quicksort_algo.c      \
			push_swap.c

OBJS = $(SRC:.c=.o)

KKK = ╔═════════════════════════════════════╗\
║  █████  ██   ██  █████ 	██	  ██  ║\
║  ██  ██ ██   ██ ██     	██	  ██  ║\
║  █████  ██   ██  █████ 	████████  ║\
║  ██     ██   ██      ██   ██	  ██  ║\
║  ██      █████   █████ 	██	  ██  ║\
║									  ║\
║									  ║\
║ █████   ██        ██  ██████  █████ ║\
║██	      ██        ██  ██  ██  ██  ██║\
║ █████   ██   ██   ██  ██████  █████ ║\
║     ██   ██  ██  ██   ██  ██  ██    ║\
║ █████     ██    ██    ██  ██  ██	  ║\
╚═════════════════════════════════════╝



all: $(NAME)
	@echo "$(2) Compiling is Done !!"

%.o: %.c push_swap.h
	@$(CC) $(CFLALGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLALGS) $^ -o $(NAME) 
# -fsanitize=address
# bonus: $(BOBJS)
# 	ar rcs $(NAME) $(BOBJS)

clean:
	@rm -rf $(OBJS) $(BOBJS)

fclean: clean
	@rm -rf $(NAME) $(BOBJS)

re: fclean all