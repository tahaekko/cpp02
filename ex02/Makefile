
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = prog
all : $(NAME)

$(NAME) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
