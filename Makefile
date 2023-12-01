NAME = libft.a

SOURCES = ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlcpy.c ft_tolower.c ft_isalpha.c \
	ft_isprint.c ft_strchr.c ft_strlen.c ft_toupper.c ft_bzero.c ft_memchr.c ft_memcmp.c \
	ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	ft_strlcat.c ft_memmove.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

OBJ = ${SOURCES:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
		ar rcs ${NAME} ${OBJ}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}
re: fclean all

.PHONY:			all clean fclean re