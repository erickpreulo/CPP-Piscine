# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 16:26:42 by egomes            #+#    #+#              #
#    Updated: 2022/04/06 19:15:40 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

NAME = interface

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all