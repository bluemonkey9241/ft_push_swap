NAME = push_swap
SRC_FILES = actions/push.c actions/rotate.c actions/swap.c \
			utils/linked_list.c push_swap.c solve/radix.c utils/util.c \
			solve/stackLenThree.c utils/checkInput.c solve/stackLenFive.c \
			solve/bubblesort.c
#OBJ_FILES = $(SRC_FILES:.c=.o)
FLAGS = -Wall -Werror -Wextra -g #-fsanitize=address
LIB = libft/libft.a


all: $(NAME)

$(NAME): $(SRC_FILES)
	$(MAKE) -C libft
	gcc $(FLAGS) $(SRC_FILES) $(LIB) -o $(NAME)

clean:
	

fclean:
	rm -f $(NAME)

re: fclean all