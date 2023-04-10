SRCS		=	ft_printf.c \
				ft_printffunc.c \
				ft_printffunc2.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus
