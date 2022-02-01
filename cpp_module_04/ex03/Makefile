# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 23:42:45 by anolivei          #+#    #+#              #
#    Updated: 2022/02/01 14:34:38 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC =	./AMateria.cpp \
		./Ice.cpp \
		./Cure.cpp \
		./Character.cpp \
		./MateriaSource.cpp \
		./main.cpp

OBJS =	./AMateria.o \
		./Ice.o \
		./Cure.o \
		./Character.o \
		./MateriaSource.o \
		./main.o

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -g -fsanitize=address

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
