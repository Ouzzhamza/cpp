CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

HEADERS = MutantStack.hpp

OBJ = $(SRC:.cpp=.o)

NAME = MutantStack

all : $(NAME) 

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o  $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY  : all clean fclaen re
