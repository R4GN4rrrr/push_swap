NAME = push_swap

SOURCES = push_swap.c\
		push.c\
		rev_rotate.c\
		rotate.c\
		swap.c\
		actions_utils.c\
		ft_lstnew.c\
		libft/ft_split.c\
		libft/ft_atoi.c\
		utils.c\
		ft_lstadd_back.c\
		libft/ft_strjoin.c\
		libft/ft_strlen.c\
		libft/ft_strdup.c\
		libft/ft_memcpy.c\
		libft/ft_putstr_fd.c\
		algo_sort.c\
		utils2.c\
		libft/ft_isdigit.c\
		utils3.c\

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Werror -Wextra -Wall


$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 

all : $(NAME)

clean :
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
