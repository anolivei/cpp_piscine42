# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 23:42:45 by anolivei          #+#    #+#              #
#    Updated: 2022/01/26 23:48:35 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

INCLUDES	= ./

OBJS =	Animal.o \
		Cat.o \
		Dog.o \
		WrongAnimal.o \
		WrongCat.o \
		main.o

SRC =	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98 -g -fsanitize=address -Wshadow

$(NAME):	$(SRC) $(OBJ)
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(INCLUDES)

all:	$(NAME)

clean:
		@$(RM) $(OBJS)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean:	clean
		@$(RM) $(NAME)
		@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re:	fclean all

PHONY:	all clean fclean re
