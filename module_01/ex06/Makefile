SRC = main.cpp/
	Harl.hpp/
	Harl.cpp/


CXXFLAGS = c++ -Wall -Wextra -Werror -I.

NAME = harl

all: 
	$(CXX) $(CXXFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re