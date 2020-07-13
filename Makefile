# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/13 16:23:00 by amoracho          #+#    #+#              #
#    Updated: 2020/07/13 16:23:03 by amoracho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c		\
			ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c		\
			ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c		\
			ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c		\
			ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c		\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c		\
			ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c	\
			ft_putendl_fd.c ft_putnbr_fd.c ft_issign.c ft_isgraph.c		\
			ft_islower.c ft_isupper.c ft_isgraph.c ft_isin.c	\
			ft_isspace.c ft_ispunct.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC	=	cc

SO	=	gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o

CFLAGS		=-Wall -Wextra -Werror

RM	=	rm -f

AR	=	ar rc

RANLIB	=	ranlib

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		${AR} ${NAME} ${OBJS}
		${RANLIB} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all bonus

.PHONY:		all clean fclean re bonus
