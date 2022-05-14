# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 16:10:17 by egomes            #+#    #+#              #
#    Updated: 2022/05/10 21:14:37 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Array.tpp

NAME = array

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS)a $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all