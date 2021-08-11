
NAME	= phoneBook

CC		= /usr/bin/clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR	= srcs/
OBJ_DIR	= objs/
INC_DIR	= includes/

FILES	= Phone_book Contact ContactGetters ContactSetters main

SRCS 	= $(patsubst %, $(SRC_DIR)%.cpp, $(FILES))
OBJS 	= $(patsubst %, $(OBJ_DIR)%.o, $(FILES))


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(FLAGS) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re