# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 23:31:57 by anolivei          #+#    #+#              #
#    Updated: 2022/01/08 03:13:49 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRC_DIR		= .

SRC			= megaphone.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC_DIR)/$(SRC)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects (but they don't exist)\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re