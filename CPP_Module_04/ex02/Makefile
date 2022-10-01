
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp

OBJ = $(SRC:.cpp=.o)

NAME = Abstract

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)


re : fclean all

.PHONY : all clean fclean re
