CC = c++

FLAGS = -Wall -Wextra -Werror 

SRC = main.cpp

NAME = My_owsome_PhoneBook

$(OBJ) = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)

clean : 
		rm -rf $(OBJ)
fclean : 
		clean
		rm -rf $(NAME)
re : 
	clean all