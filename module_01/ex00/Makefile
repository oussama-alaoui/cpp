SRC = main.cpp/
	newZombie.cpp/
	randomChump.cpp/
	Zombie.cpp/
	ZombieEvent.hpp/

OBJS = $(SRC:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -I.

NAME = zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re