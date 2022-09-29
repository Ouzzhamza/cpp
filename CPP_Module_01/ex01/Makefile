CC     = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp Zombie.cpp ZombieHorde.cpp

HEADER = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

NAME = Moar_brainz

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
