
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = prog
all : $(NAME)

$(NAME) : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)
%.o : %.cpp Fixed.hpp
	c++ -Wall -Wextra -Werror -c $< -o $@
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
re : fclean all
