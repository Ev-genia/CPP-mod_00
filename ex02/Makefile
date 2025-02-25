# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:52:01 by mlarra            #+#    #+#              #
#    Updated: 2022/10/05 17:11:22 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account

SRCS	=	Account.cpp	test.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	Account.hpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror #-std=c++98

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS} ${HEADER}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all
