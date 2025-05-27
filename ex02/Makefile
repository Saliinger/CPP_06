NAME = Base
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address


SRCS =	./src/Base.cpp \
		main.cpp

OBJ = $(SRCS:.cpp=.o)

.phony: $(NAME) all clean fclean re

all: $(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all