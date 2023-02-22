NAME = push_swap


NAME_BONUS = push_swap_bonus

SOURCES = push_swap.c\
		push.c\
		rev_rotate.c\
		rotate.c\
		swap.c\
		actions_utils.c\
		utils.c\
		algo_sort.c\
		utils2.c\
		utils3.c\
		libft/ft_split.c\
		libft/ft_atoi.c\
		libft/ft_strjoin.c\
		libft/ft_strlen.c\
		libft/ft_strdup.c\
		libft/ft_memcpy.c\
		libft/ft_putstr_fd.c\
		libft/ft_isdigit.c\

SOURCES_BONUS = actions_utils_bonus.c\
			push_bonus.c\
			rev_rotate_bonus.c\
			rotate_bonus.c\
			swap_bonus.c\
			utils2_bonus.c\
			utils_bonus.c\
			


OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CC = cc

CFLAGS = -Werror -Wextra -Wall


$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 

$(NAME_BONUS) : $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) $(OBJECTS_BONUS) -o $(NAME_BONUS)


all : $(NAME)

clean :
	rm -f $(OBJECTS)
	rm -f $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

re: fclean all
