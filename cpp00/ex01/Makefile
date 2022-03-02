# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 17:52:48 by egomes            #+#    #+#              #
#    Updated: 2022/03/01 18:19:13 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp

NAME = phonebook

CC = G++

CFLAGS = -Wall -Wextra -Werror

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all