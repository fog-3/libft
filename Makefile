NAME = libft.a

SOURCES = ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlcpy. ft_tolower.c ft_isalpha.c \
	ft_isprint.c ft_strchr.c ft_strlen.c ft_toupper.c ft_bzero.c \
	ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SOURCES:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
		cc -o ${NAME} ${OBJ} -Iincludes ${CFLAGS}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${OBJ}
re: fclean all

.PHONY:			all clean fclean