# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 11:33:02 by abelkhay          #+#    #+#              #
#    Updated: 2018/11/09 14:08:17 by abelkhay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Werror -Wextra
SRC = main.c
OBJ = main.o

all : $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
