# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 00:33:07 by hugoo             #+#    #+#              #
#    Updated: 2022/10/27 01:20:58 by hugoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ClapTrap

SRCS =	main.cpp ClapTrap.cpp

CC = c++

OBJS_PATH = objects/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS:.cpp=.o}}

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

${OBJS_PATH}%.o: ${SRCS_PATH}%.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -c $< -o $@ ${INCLUDES}

all:        $(NAME)

$(NAME):    $(OBJS)
	${CC} ${CFLAGS} $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:			clean
	${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re