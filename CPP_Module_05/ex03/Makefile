
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

HEADER = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

OBJ = $(SRC:.cpp=.o)

NAME = 28B

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)


re : fclean all

.PHONY : all clean fclean re
