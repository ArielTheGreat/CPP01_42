CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = obj
SRCS = main.cpp FileReplace.cpp
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
NAME = replace

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CPP) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony: all re fclean clean