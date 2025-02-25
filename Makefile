.PHONY : all re clean fclean reclean
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = check_input.c create_stack.c ft_atol.c main.c push.c \
	rotate.c r_rotate.c swap.c  normalise.c \
	length.c radix_sort.c ft_free.c \
	ft_putstr.c is_sorted_or_dupl.c sort.c man_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

reclean:
	$(MAKE) re
	$(MAKE) clean
