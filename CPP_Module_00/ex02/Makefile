CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = tests.cpp Account.cpp

HEADER = Account.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = The_job_of_your_dreams

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re


