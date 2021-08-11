NAME	= leak

CC	= /usr/bin/clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR	= ./
OBJ_DIR	= objs/

FILES	= ex01

SRCS 	= $(patsubst %, $(SRC_DIR)%.cpp, $(FILES))
OBJS 	= $(patsubst %, $(OBJ_DIR)%.o, $(FILES))


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(FLAGS) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re