# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 00:52:29 by ael-khel          #+#    #+#              #
#    Updated: 2023/09/04 00:52:32 by ael-khel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
NAME = ClapTrap
################################################################################
OBJ_DIR = objs

FILES = main ClapTrap

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

$(OBJ_DIR)/%.o: %.cpp ClapTrap.hpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: clean all