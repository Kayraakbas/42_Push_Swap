PUSH_SWAP=push_swap

FT_PRINTF_PATH= ./ft_printf
FT_PRINTF= $(FT_PRINTF_PATH)/libftprintf.a

FT_PRINTF_LIB_FLAGS= -L $(FT_PRINTF_PATH) -l ftprintf -I $(FT_PRINTF_PATH)

LIBFT_PATH	= ./libft
LIBFT		= $(LIBFT_PATH)/libft.a

LIBFT_LIB_FLAGS= -L $(LIBFT_PATH) -lft -I $(LIBFT_PATH)


CC=cc
CFLAGS=-Wall -Wextra -Werror


all: $(PUSH_SWAP) 

$(PUSH_SWAP): $(FT_PRINTF) $(LIBFT) $(PUSH_SWAP).c
	$(CC) $(CFLAGS) $(PUSH_SWAP).c -o $(PUSH_SWAP) \
	utils.c radix_sort.c index.c push_rules.c rotate_rules.c swap_rules.c reverse_rotate_rules.c linked_list_utils.c \
	$(FT_PRINTF_LIB_FLAGS) $(LIBFT_LIB_FLAGS)

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