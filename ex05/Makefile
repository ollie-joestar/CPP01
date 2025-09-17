NAME	= harl
CC		= c++ -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp \
		  Harl.cpp

HEADERS	= Harl.hpp
OBJ		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
