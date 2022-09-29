CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Contact.cpp PhoneBook.cpp

HEADER = Contact.hpp phonebook.hpp

OBJ = $(SRC:.cpp=.o)

NAME = My_Owsome_PhoneBook

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

.PHONY : all clean fclean re
