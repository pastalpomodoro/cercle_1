NAME = libft.a

CC = cc
FLAG = -Wall -Werror -Wextra

FILE = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_memset.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

FILEBUS = ft_lstmap.c ft_lstlast.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c

OBJ = ${FILE:.c=.o}
OBJBUS = ${FILEBUS:.c=.o}

OBJ = ${FILE:.c=.o}
OBJBUS = ${FILEBUS:.c=.o}

all:${NAME}

${NAME}:${OBJ}
	ar crs ${NAME} ${OBJ}
%.o:%.c
	${CC} ${FLAG} -c $<

bonus:${OBJBUS}
	ar crs ${NAME} ${OBJBUS}
%.o:%.c
	${CC} ${FLAG} -c $<

clean:
	rm -f ${OBJ} ${OBJBUS}
fclean:clean
	rm -f ${NAME}
re:fclean all

.PHONY: all bonus clean fclean re
