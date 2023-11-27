FLAGS = -Wall -Wextra -Werror
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = prog
HEADER = Fixed.hpp
all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	c++ $(FLAGS) -c $< -o $@
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
