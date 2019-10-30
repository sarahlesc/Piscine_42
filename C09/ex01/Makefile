# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slescure <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 16:57:04 by slescure          #+#    #+#              #
#    Updated: 2019/07/25 16:07:16 by slescure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c	\
	  ./srcs/ft_swap.c		\
	  ./srcs/ft_putstr.c	\
	  ./srcs/ft_strlen.c	\
	  ./srcs/ft_strcmp.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I./includes

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

RM : rm -f

all : $(NAME)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
