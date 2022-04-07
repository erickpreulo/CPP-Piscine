# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 23:53:31 by egomes            #+#    #+#              #
#    Updated: 2022/04/05 01:42:32 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

NAME = FragTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all