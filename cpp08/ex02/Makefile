SRC = main.cpp

NAME = stack

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: 	$(NAME)

clean:
		@rm -rf $(NAME)

fclean: clean

re: 	fclean all