SRCS			= 	ft_printf.c ft_pt_hex.c ft_pt_int.c ft_pt_ptr.c ft_pt_str.c ft_pt_unsigned.c
CC				= 	cc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror

NAME			= 	libftprintf.a

OBJS			= 	$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rc $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: 		all clean fclean re
