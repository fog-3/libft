NAME = libft.a

SOURCES = ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlcpy.c ft_tolower.c ft_isalpha.c \
	ft_isprint.c ft_strchr.c ft_strlen.c ft_toupper.c ft_bzero.c ft_memchr.c ft_memcmp.c \
	ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_strncmp.c ft_strnstr.c \
	ft_strlcat.c ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_putchar_fd.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BSOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c 

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

BOBJ = ${BSOURCES:.c=.o}

OBJ = ${SOURCES:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
		ar rcs ${NAME} ${OBJ}

bonus: ${OBJ} ${BOBJ}
		ar rcs ${NAME} $?

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}
re: fclean all


.PHONY:			all clean fclean bonus re