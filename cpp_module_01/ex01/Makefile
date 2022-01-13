# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 15:42:07 by anolivei          #+#    #+#              #
#    Updated: 2022/01/13 15:43:12 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
SRC_DIR		= ./
OBJ_DIR		= .objs/
INCLUDES	= ./

SRC		=	$(SRC_DIR)Zombie.cpp \
			$(SRC_DIR)main.cpp \
			$(SRC_DIR)ZombieHorde.cpp

OBJ	= $(SRC:$(SRC_DIR)%=$(OBJ_DIR)%.o)

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= /bin/rm -rf

all: $(NAME)

$(OBJ_DIR):
	@mkdir $@

$(OBJ): | $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) -o $@ $^

clean:
	@$(RM) $(OBJ_DIR)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
