# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 00:52:29 by ael-khel          #+#    #+#              #
#    Updated: 2023/09/17 20:48:14 by ael-khel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
NAME = AAnimal
################################################################################
OBJ_DIR = objs

FILES = main AAnimal Cat Dog Brain

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

$(OBJ_DIR)/%.o: %.cpp AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: clean all