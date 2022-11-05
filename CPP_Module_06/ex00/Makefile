CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp

HEADER = Base.hpp

OBJ = $(SRC:.cpp=.o)

NAME = convert

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
 
