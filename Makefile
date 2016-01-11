# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glodenos <glodenos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2100/01/01 00:00:00 by glodenos          #+#    #+#              #
#    Updated: 2016/01/06 18:15:37 by glodenos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =	my_libft.a

FLAGS = -Wall -Wextra -Werror

SRC   =	ft_atoi.c		ft_bzero.c		ft_itoa.c		ft_isalnum.c	\
		ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	\
		ft_lstadd.c		ft_lstdel.c		ft_lstdelone.c	ft_lstiter.c	\
		ft_lstmap.c		ft_lstnew.c		ft_memalloc.c	ft_memccpy.c	\
		ft_memchr.c		ft_memcpy.c		ft_memcmp.c		ft_memdel.c		\
		ft_memmove.c	ft_memset.c		ft_putchar.c	ft_putchar_fd.c	\
		ft_putendl.c	ft_putendl_fd.c	ft_putnbr.c		ft_putnbr_fd.c	\
		ft_putstr.c		ft_putstr_fd.c	ft_strchr.c		ft_strcat.c		\
		ft_strclr.c		ft_strcmp.c		ft_strcpy.c		ft_strdel.c		\
		ft_strdup.c		ft_strequ.c		ft_striter.c	ft_striteri.c	\
		ft_strjoin.c	ft_strlcat.c	ft_strlen.c		ft_strmap.c		\
		ft_strmapi.c	ft_strncat.c	ft_strnequ.c	ft_strnew.c		\
		ft_strnstr.c	ft_strncmp.c	ft_strncpy.c	ft_strrchr.c	\
		ft_strsplit.c	ft_strstr.c		ft_strsub.c		ft_strtrim.c	\
		ft_tolower.c	ft_toupper.c	matrix_sqrt.c					\

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(OBJ)

re: fclean all

.PHONY: all $(NAME) clean fclean re
