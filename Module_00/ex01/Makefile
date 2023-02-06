# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adinari <adinari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 18:31:06 by adinari           #+#    #+#              #
#    Updated: 2023/01/27 22:14:14 by adinari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRC =	main.cpp\
		PhoneBook.cpp\
		Contact.cpp
		
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