NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	main.c \
			push_swap.c \
			argument.c \
			check.c \
			parse.c \
			sort.c \
			mini_sort.c \
			bubble.c \
			utils.c \
			operation_push.c \
			operation_swap.c \
			operation_rotate.c \

OBJS 	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(SRCS) $(CFLAGS) -o $(NAME)

clean	:
			rm $(OBJS)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

.PHONY: clean fclean re all
