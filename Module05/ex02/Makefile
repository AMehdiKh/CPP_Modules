# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 22:20:58 by ael-khel          #+#    #+#              #
#    Updated: 2024/01/17 00:19:08 by ael-khel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
NAME = AForm
################################################################################
OBJ_DIR = objs

FILES = main Bureaucrat AForm PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm

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

$(OBJ_DIR)/%.o: %.cpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: clean all