SRC = main.cpp contact.cpp



OBJS = $(SRC:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -I.

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS) Contact.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re