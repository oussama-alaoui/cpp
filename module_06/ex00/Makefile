NAME = convert

SRC = main.cpp convert.cpp

CXX = c++

HEADER = convert.hpp

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

