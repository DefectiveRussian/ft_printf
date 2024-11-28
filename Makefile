NAME = libftprintf.a
CC = gcc
PTS :=	ft_putchar.c \
		ft_putvoid.c \
		ft_printuint.c \
		ft_putnbr.c \
		ft_putnbrhexa.c \
		ft_putstr.c \
		ft_printf.c \

CFLAGS = -Wall -Werror -Wextra -std=c99
RM = rm -f
DEPS = ft_printf.h
OBJS = $(PTS:.c=.o)

%.o:%.c
	@$(CC) -c $(CFLAGS) -I. $< -o $@

${NAME}:${OBJS} $(INCLUDE)
	@ar -rsc ${NAME} ${OBJS}

all: $(NAME)

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${OBJS}
	@${RM} ${NAME}
	@${RM} bonus

re: fclean all

.PHONY: all clean fclean re
