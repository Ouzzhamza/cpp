CC     = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC    = main.cpp PmergeMe.cpp

HEADER = PmergeMe.hpp

OBJ = $(SRC:.cpp=.o)

NAME   = PmergeMe

all	:	$(NAME)

$(NAME) :	$(OBJ) 
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o :	%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
	
.PHONY 	: all clean fclean re