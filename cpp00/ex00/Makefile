CC     = c++

FLAGS  = -Wall -Wextra -Werror 
SRC    = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME   = megaphone

all	   : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : 
	fclean all
		