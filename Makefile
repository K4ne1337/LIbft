NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = ft_memccpy.c\
ft_memmove.c\
ft_memchr.c\
ft_memcmp.c\
ft_strcat.c\
ft_strlcat.c\
ft_strchr.c\
ft_strrchr.c\
ft_strstr.c\
ft_strnstr.c\
ft_strcmp.c\
ft_strncmp.c\
ft_strnequ.c\
ft_strjoin.c\
ft_strtrim.c\
ft_strsplit.c\
ft_memcpy.c\
ft_strlen.c\
ft_strncat.c\
ft_strsub.c\
ft_strcpy.c\
ft_atoi.c\
ft_putchar.c\
ft_putstr.c

OBJ = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
