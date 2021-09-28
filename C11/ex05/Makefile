SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op
RM		= rm -f

.c.o :
			${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}
all :		${OBJS}
			${CC} -o ${NAME} ${OBJS}
clean :
			${RM} ${OBJS}
fclean :	clean
			${RM} ${NAME}
re :		fclean all
