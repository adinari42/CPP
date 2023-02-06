FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = violence
SRC =	main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp
		
OBJ = 	$(SRC:.cpp=.o)

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