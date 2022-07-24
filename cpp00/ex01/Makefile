CC = c++

FLAGS = -Wall -Wextra -Werror 

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

NAME = My_Owsome_PhoneBook

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)
re : fclean all