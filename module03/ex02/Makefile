NAME	= clapTrap

CXX		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR	= ./
OBJ_DIR	= objs/

FILES	= main FragTrap ScavTrap ClapTrap

SRCS 	= $(patsubst %, $(SRC_DIR)%.cpp, $(FILES))
OBJS 	= $(patsubst %, $(OBJ_DIR)%.o, $(FILES))


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(FLAGS) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f *.replace

re: fclean all

.PHONY: all clean fclean re