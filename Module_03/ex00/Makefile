FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex00
SRC =	ClapTrap.cpp\
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.c
	c++ -c $^ -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	make clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	clean fclean re