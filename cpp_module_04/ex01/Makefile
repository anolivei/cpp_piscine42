# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 23:42:45 by anolivei          #+#    #+#              #
#    Updated: 2022/01/29 04:04:10 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRC =	./main.cpp \
		./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp \
		./Brain.cpp

OBJS =	./main.o \
		./Animal.o \
		./Dog.o \
		./Cat.o \
		./Brain.o

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98 -Wshadow -g -fsanitize=address

$(NAME):	$(OBJS)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS):	$(SRC)
			@$(CC) $(CFLAGS) -c $(SRC)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"

all:		$(NAME)

clean:
			@$(RM) $(OBJS)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re:			fclean all

PHONY:		all clean fclean re