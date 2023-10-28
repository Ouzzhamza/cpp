CC     = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98 

SRC    = main.cpp BitcoinExchange.cpp

HEADER = BitcoinExchange.hpp

OBJ = $(SRC:.cpp=.o)

NAME   = btc

all	   : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
	
.PHONY 	: all clean fclean re