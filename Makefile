NAME = libft.a

compile = cc

flags = -Wall -Wextra -Werror 

functions = ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_atoi.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c

objects = $(functions:.c=.o)


all:$(NAME)

$(NAME):$(objects)
	ar rcs $@ $^

%.o:%.c 
	$(compile) $(flags) -c $< -o $@

clean:
	rm -f *.o $(NAME) a.out

fclean:
	rm -f $(NAME)

re: fclean all
