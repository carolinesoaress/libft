NAME        := libft.a
SOURCES     := ft_bzero.c \
               ft_memcpy.c \
               ft_memset.c \
               ft_strlen.c \
			   ft_strlcpy.c \
			   ft_strlcat.c \
			   ft_strlcpy.c \
			   ft_tolower.c \
			   ft_toupper.c \
			   ft_strchr.c

OBJECTS     := ${SOURCES:.c=.o}
CC          := cc
RM          := rm -f
CFLAGS      := -Wall -Wextra -Werror
AR          := ar -rcs

all: ${NAME}

$(NAME): ${OBJECTS}
	${AR} ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all
