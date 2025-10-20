NAME= libft.a

cc= cc -g3

flags=  -Wall\
		-Werror\
		-Wextra

header= libft.h

lib_c= 	ft_isalpha.c\
			ft_isdigit.c\
			ft_isascii.c\
			ft_isalnum.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_bzero.c\
			ft_memset.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\
			ft_int_len.c\
			ft_swap.c\
			ft_del.c\
			ft_del_del.c\
			ft_qsort.c\
			ft_putnbrhexlower_fd.c\
			ft_putnbrhexupper_fd.c\
			ft_hex_len.c\
			ft_ptr_putnbrhex_fd.c\
			ft_ptr_len.c

lib_o= $(lib_c:.c=.o)

all: $(NAME)

$(NAME): $(lib_o)
	ar rcs $@ $^ $(header)

%.o:%.c
	$(cc) $(flags) -c $< -o $@

clean: 
	rm -f $(lib_o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re so
