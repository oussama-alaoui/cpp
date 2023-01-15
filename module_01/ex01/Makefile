NAME = zombiehorde

HEADERS = zombie.hpp

SRC = main.cpp zombie.cpp zombieHorde.cpp

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

%.o : %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

