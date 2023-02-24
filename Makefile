NAME = push_swap


NAME_BONUS = checker

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

SOURCES_BONUS = bonus/actions_utils_bonus.c\
			bonus/get_next_line.c\
			bonus/get_next_line_utils.c\
			bonus/push_bonus.c\
			bonus/push_swap_bonus.c\
			bonus/rev_rotate_bonus.c\
			bonus/rotate_bonus.c\
			bonus/swap_bonus.c\
			bonus/utils2_bonus.c\
			bonus/utils_bonus.c\
			libft/ft_split.c\
			libft/ft_atoi.c\
			libft/ft_strlen.c\
			libft/ft_memcpy.c\
			libft/ft_putstr_fd.c\
			libft/ft_isdigit.c\
			libft/ft_strjoin.c\
			libft/ft_strdup.c\
			


OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CC = cc

CFLAGS = -Werror -Wextra -Wall 


$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 

$(NAME_BONUS) : $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) $(OBJECTS_BONUS) -o $(NAME_BONUS)


all : $(NAME)

bonus : $(NAME_BONUS)

clean :
	rm -f $(OBJECTS)
	rm -f $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

re: fclean all
