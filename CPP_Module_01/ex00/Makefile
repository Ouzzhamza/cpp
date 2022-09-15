CC		 = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp Zombie.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = BraiiiiiiinnnzzzZ

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f

re : fclean all

.PHONY : all clean fclean re

