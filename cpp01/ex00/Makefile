# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 20:11:57 by egomes            #+#    #+#              #
#    Updated: 2022/03/15 11:25:03 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all