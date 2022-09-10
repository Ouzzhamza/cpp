CC = clang++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

NAME = My_Owsome_PhoneBook

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)
re : fclean all
