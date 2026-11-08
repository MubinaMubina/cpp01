NAME		= zombie

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HDRS		= Zombie.hpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	@valgrind --leak-check=full --show-leak-kinds=all --error-exitcode=1 -q ./$(NAME) \
		&& echo "\033[32m[valgrind] OK: no leaks, no errors\033[0m" \
		|| (echo "\033[31m[valgrind] LEAK or memory error detected\033[0m" && exit 1)

.PHONY: all clean fclean re valgrind
