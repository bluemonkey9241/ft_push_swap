# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: svan-waa <svan-waa@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/03 12:27:21 by svan-waa      #+#    #+#                  #
#    Updated: 2020/12/15 12:09:47 by svan-waa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC_FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_tolower.c ft_toupper.c ft_memcpy.c ft_memccpy.c ft_calloc.c \
			ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_charcmp.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_islower.c ft_isupper.c
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	clang -c $(CFLAGS) $(SRC_FILES)

clean:
	rm -f $(OBJ_FILES) $(BONUS_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
