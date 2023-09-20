# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 00:52:29 by ael-khel          #+#    #+#              #
#    Updated: 2023/09/16 15:18:54 by ael-khel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
NAME = WrongAnimal
################################################################################
OBJ_DIR = objs

FILES = main Animal Cat Dog WrongAnimal WrongCat

SRCS = ${addsuffix .cpp, $(FILES)}

OBJS = ${SRCS:%.cpp=$(OBJ_DIR)/%.o}
################################################################################
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
################################################################################

.PHONY: clean
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: clean all