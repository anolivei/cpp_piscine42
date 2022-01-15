# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:58:45 by anolivei          #+#    #+#              #
#    Updated: 2022/01/14 16:16:43 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
SRC_DIR		= sources/
OBJ_DIR		= .objs/
INCLUDES	= includes/

SRC		=	$(SRC_DIR)Replace.cpp \
			$(SRC_DIR)main.cpp

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
	@$(RM) *.replace
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving .replace files\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
