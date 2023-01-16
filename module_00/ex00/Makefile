SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
CXXFLAGS		=  -std=c++98 -Wall -Wextra -Werror -I.

NAME			= megaphone

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test