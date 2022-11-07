CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

HEADER = Data.hpp

OBJ = $(SRC:.cpp=.o)

NAME = Serialization

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

