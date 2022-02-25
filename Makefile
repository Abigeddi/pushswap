NAME = pushswap
BONUS = checker
INCLUDE = pushswap.h
OBJ = 		ft_check_error.o \
				ft_find_biggest_nb.o \
				ft_sort_five_numbers.o \
				ft_sort_handred.o \
				ft_pa_pb.o \
				ft_reverse_rotate.o \
				ft_rotate.o \
				ft_swap_a_b.o \
				ft_sort_list.o \
				ft_sort_then_numbers.o \
				ft_sort_three_numbers.o \
				ft_push_swap.o \
				main.o \
				ft_split.o \
				ft_push_utils.o \

OBJ_BONUS = checker.o \
			get_next_line.o \
			ft_split.o \
			ft_check_error.o \
			ft_swap_a_b.o \
			ft_reverse_rotate.o \
			ft_rotate.o \
			ft_pa_pb.o \
			ft_push_swap.o \
			ft_push_utils.o \
		
CFLAGS = -Wall -Werror -Wextra
all: $(NAME)
	cc $(CFLAGS) $(OBJ) -o $(NAME)
$(NAME): $(OBJ)

bonus: $(BONUS)
	cc $(CFLAGS) $(OBJ_BONUS) -o $(BONUS)

$(BONUS): $(OBJ_BONUS)
	

bonus/%.o : %.c pushswap.h
	cc $(CFLAGS) -c $< -o $@

%.o : %.c pushswap.h
	cc $(CFLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)
fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all
.PHONY: all clean fclean re
