NAME	= violence
CC		= c++ -Wall -Wextra -Werror -std=c++98 -g

SRC		= main.cpp \
		  Weapon.cpp \
		  HumanA.cpp \
		  HumanB.cpp \

HEADERS	= Weapon.hpp \
		  HumanA.hpp \
		  HumanB.hpp

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
