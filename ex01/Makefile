# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 22:48:23 by mlarra            #+#    #+#              #
#    Updated: 2022/10/05 15:12:03 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phoneBook

SRCS	=	main.cpp	PhoneBook.cpp	Contact.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	PhoneBook.hpp	Contact.hpp

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