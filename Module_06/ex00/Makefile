# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 11:41:01 by tbolkova          #+#    #+#              #
#    Updated: 2024/01/26 14:19:20 by tbolkova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation
NAME = ex00
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG = -g #-fsanitize=address

# Libraries

# Paths
SRC_PATH = src/
OBJ_PATH = obj/

# SRC Files
SRC =	main.cpp \
		ScalarConverter.cpp

# OBJ Files
OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

# Colors
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;34m
RED = \033[0;31m
DEFAULT = \033[0;39m

# Rules

all: $(NAME)

$(OBJ_PATH):
		@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.cpp | $(OBJ_PATH)
		@$(CC) -c $(FLAGS) -o $@ $<

$(NAME): $(OBJ_PATH) $(OBJS)
		@$(CC) -o $(NAME) $(OBJS) $(FLAGS) $(DEBUG)
		@echo "$(GREEN)Executable <$(NAME)> compiled successfully.$(DEFAULT)"

clean:
		@$(RM) -r $(OBJ_PATH)
		clear
		@echo "$(YELLOW)Object files deleted.$(DEFAULT)"

fclean: clean
		@$(RM) $(NAME)
		clear
		@echo "$(RED)All <$(NAME)> executables deleted.$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean