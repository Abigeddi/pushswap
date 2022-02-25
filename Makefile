PUSH_SWAP_SRC = ft_check_error.c \
				ft_find_biggest_nb.c \
				ft_sort_five_nb.c \
				ft_sort_handred.c \
				ft_pa_pb.c \
				ft_reverse_rotate.c \
				ft_rotate.c \
				ft_swap_a_b.c \
				ft_sort_list.c \
				ft_sort_then_nb.c \
				ft_sort_three_numbers.c \
				ft_push_swap.c \
				main.c \
				ft_split.c \
				ft_push_utils.c \


CHECKER_SRC = 	checker.c \
				get_next_line.c \
				ft_split.c \
				ft_check_errors.c \
				ft_push_a_b.c \
				ft_reverse_rotate.c \
				ft_rotate.c \
				ft_pa_pb.c \
				ft_push_swap.c \
				ft_push_utils.c \

				


PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:%.c=%.o)
CHECKER_OBJ = $(CHECKER_SRC:%.c=%.o)
PUSH_SWAP = pushswap
CHECKER = checker.c
CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP) : $(PUSH_SWAP_OBJ)
	$(CC) $(CFLAGS) $(PUSH_SWAP_OBJ) -o $(PUSH_SWAP)

$(CHECKER) : $(CHECKER_OBJ)
	$(CC) $(CFLAGS) $(CHECKER_OBJ) -o $(CHECKER)

%.o:%.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(CHECKER) $(PUSH_SWAP)

re : fclean all