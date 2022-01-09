# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 03:19:05 by anolivei          #+#    #+#              #
#    Updated: 2022/01/08 21:49:51 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account
SRC_DIR		= ./
OBJ_DIR		= .objs/
INCLUDES	= ./

SRC		=	$(SRC_DIR)Account.cpp \
			$(SRC_DIR)tests.cpp

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
	@$(RM) $(NAME) diff
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

diff: $(NAME)
	@./account > new_log.txt
	@cp 19920104_091532.log old_log.txt
	@cat old_log.txt | cut -d ' ' -f2 > old_log
	@cat new_log.txt | cut -d ' ' -f2 > new_log
	@diff old_log new_log > diff
	@$(RM) old_log new_log new_log.txt old_log.txt

re: fclean all

.PHONY: all clean fclean diff re