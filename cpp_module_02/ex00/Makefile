# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 19:02:04 by anolivei          #+#    #+#              #
#    Updated: 2022/01/16 19:06:21 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

INCLUDES	= includes/

OBJS =	Filter.o \
		main.o

SRC =	./sources/Filter.cpp \
		./sources/main.cpp

CC	= clang++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98 -g -fsanitize=address

$(NAME):	$(SRC) $(OBJ)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(INCLUDES)

all:	$(NAME)

clean:
		@$(RM) $(OBJS)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"
		@$(RM) *.replace
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving .replace files\033[0m"

fclean:	clean
		@$(RM) $(NAME)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re:	fclean all

PHONY:	all clean fclean re
