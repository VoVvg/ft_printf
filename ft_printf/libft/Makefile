# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sroland <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 21:06:49 by sroland           #+#    #+#              #
#    Updated: 2019/09/28 20:00:05 by sroland          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = source/*.c
OBJ = *.o
INCL = includes
FLAGS = -g -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -I $(INCL) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
