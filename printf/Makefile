NAME = libftprintf.a

CC = cc
FLAG = -Wall -Werror -Wextra

FILE = ft_p_x_X_%.c ft_c_s_d_i_u.c ft_printf.c

OBJ = ${FILE:.c=.o}

all:${NAME}

${NAME}:${OBJ}
	ar -crs ${NAME} ${OBJ}
%.o:%.c
	${CC} -c ${FLAG} $<
clean:
	rm -f ${OBJ}
fclean:clean
	rm -f ${NAME}
re:fclean all

.PHONY: all clean fclean re
