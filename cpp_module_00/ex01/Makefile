# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 21:52:35 by anolivei          #+#    #+#              #
#    Updated: 2022/01/06 00:37:59 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCSDIR		= sources/
OBJSDIR		= .objs/
INCLUDES	= includes/

SRCS		=	$(SRCSDIR)phonebook.cpp \
				$(SRCSDIR)Contacts.class.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) $(CFLAGS) -I $(INCLUDES) -o $@ $^

clean:
	@$(RM) $(OBJ_DIR)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re