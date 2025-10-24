NAME= fractol

cc= cc -g3

lib_path= libft

lib = $(lib_path)/libft.a

libx_path = minilibx-linux/minilibx-linux

libx = $(libx_path)/libmlx.a

flags=  -Wall\
		-Werror\
		-Wextra

LibXflags=  -o3\
			-lXext\
			-lX11\
			-lm\
			-lmlx

header= fract.h

c_files= fract-ol.c

o_files= $(c_files:.c=.o)

all: $(NAME)

$(NAME):$(o_files) $(header) $(lib)	$(libx)
	$(cc) $(o_files) $(flags) $(LibXflags) -L$(libx_path) -L$(lib_path) -lft -o $@

$(lib):
	@$(MAKE) -s -C $(lib_path)

$(libx):
	@$(MAKE) -s -C $(libx_path)

%.o:%.c
	$(cc) $(flags) -I -I$(lib_path) -I$(libx_path) -c $< -o $@

clean:
	rm -f $(o_files)

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -s -C $(lib_path) fclean

re: fclean all
