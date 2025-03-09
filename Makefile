PUSH_SWAP=push_swap

# ft_printf
FT_PRINTF_PATH= ./ft_printf
FT_PRINTF= $(FT_PRINTF_PATH)/libftprintf.a

FT_PRINTF_LIB_FLAGS= -L $(FT_PRINTF_PATH) -l ftprintf -I $(FT_PRINTF_PATH)

# libft
LIBFT_PATH	= ./libft
LIBFT		= $(LIBFT_PATH)/libft.a

LIBFT_LIB_FLAGS= -L $(LIBFT_PATH) -lft -I $(LIBFT_PATH)

# add more cutom libraries below ft_printf

CC=gcc
CFLAGS=-Wall -Wextra -Werror


all: $(PUSH_SWAP) 

$(PUSH_SWAP): $(FT_PRINTF) $(LIBFT) $(PUSH_SWAP).c
	$(CC) $(CFLAGS) $(PUSH_SWAP).c -g -O0 -o $(PUSH_SWAP) $(FT_PRINTF_LIB_FLAGS) $(LIBFT_LIB_FLAGS) rules.c helper_funcs.c radix_sort.c index.c

$(FT_PRINTF):
	make -s -C $(FT_PRINTF_PATH)

$(LIBFT):
	make -s -C $(LIBFT_PATH)

clean:
	make -s -C $(FT_PRINTF_PATH) clean
	make -s -C $(LIBFT_PATH) clean

fclean:	clean
	$(RM) $(FT_PRINTF) $(LIBFT) $(PUSH_SWAP)

re: fclean all

.PHONY: all clean fclean re bonus