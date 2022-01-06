# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 21:52:35 by anolivei          #+#    #+#              #
#    Updated: 2022/01/06 01:36:31 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCSDIR		= sources/
OBJSDIR		= .objs/
INCLUDES	= includes/

RM			= /bin/rm -rf

SRCS		=	$(SRCSDIR)phonebook.cpp \
				$(SRCSDIR)Contacts.class.cpp

OBJS	= $(SRCS:$(SRCSDIR)%=$(OBJSDIR)%.o)

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJSDIR):
	@mkdir $@

$(OBJS): | $(OBJSDIR)

$(OBJS): $(OBJSDIR)%.o: $(SRCSDIR)%
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;199mCompiling\033[0m $@"
	@$(CC) -o $@ $^

clean:
	@$(RM) $(OBJSDIR)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving objects\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32m[OK]\033[0m    \033[0;38;5;44mRemoving $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re