# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 17:52:48 by egomes            #+#    #+#              #
#    Updated: 2022/03/07 18:43:41 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Contact.cpp PhoneBook.cpp

NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all