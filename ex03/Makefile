NAME = unnecessaryViolence
SRC = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++17

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME) > /dev/null 2>&1 && echo "\033[32mCompilation successful!\033[0m"

fclean:
	@rm -f $(NAME) > /dev/null 2>&1 && echo "\033[31mProgram cleared successfully!\033[0m"

re: fclean all

.PHONY: all fclean re