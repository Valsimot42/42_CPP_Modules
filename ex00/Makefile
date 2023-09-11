# Compilation
NAME = ex00
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG = -g -fsanitize=address

# Libraries

# Paths
SRC_PATH = src/
OBJ_PATH = obj/

# SRC Files

SRC =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

# OBJ Files

OBJ = $(SRC:.cpp=.o)

# Colors

GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;34m
RED = \033[0;31m
DEFAULT = \033[0;39m

# Rules

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(DEBUG) $(OBJ) -o $(NAME)
		@echo "$(GREEN)Executable <$(NAME)> compiled successfully.$(DEFAULT)"

clean:
		@$(RM) $(OBJ)
		clear
		@echo "$(YELLOW)Object files deleted.$(DEFAULT)"

fclean:
		@$(RM) $(NAME)
		clear
		@echo "$(RED)All <$(NAME)> executables deleted.$(DEFAULT)"

re: fclean all

.SILENT: $(OBJ)
.PHONY: all clean fclean re