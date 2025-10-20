NAME= pipex

cc= cc -g3

lib_path= libft

lib = $(lib_path)/libft.a

flags=  -Wall\
		-Werror\
		-Wextra

LibXflags=  -03\
			-lXext\
			-lX11\
			-lm\
			-lmlx

header= minitalk.h

c_files= client.c


o_files= $(c_files:.c=.o)


all: $(NAME) $(NAME2)

$(NAME):$(o_files) $(header) $(lib)
	$(cc) $(o_files) $(flags) $(LibXflags) -L$(lib_path) -lft -o $@

$(lib):
	@$(MAKE) -s -C $(lib_path)

%.o:%.c
	$(cc) $(flags) -I -I$(lib_path) -c $< -o $@

clean:
	rm -f $(o_files)

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -s -C $(lib_path) fclean

re: fclean all
