# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 23:42:45 by anolivei          #+#    #+#              #
#    Updated: 2022/05/15 20:35:41 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC =	./main.cpp \
		./Bureaucrat.cpp \
		./AForm.cpp \
		./RobotomyRequestForm.cpp \
		./ShrubberyCreationForm.cpp \
		./PresidentialPardonForm.cpp \
		./Intern.cpp

OBJS =	./main.o \
		./Bureaucrat.o \
		./AForm.o \
		./RobotomyRequestForm.o \
		./ShrubberyCreationForm.o \
		./PresidentialPardonForm.o \
		./Intern.o

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
			@$(RM) $(NAME) ./Gama_shrubbery
			@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re:			fclean all

PHONY:		all clean fclean re
