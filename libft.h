#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, size_t n);

#endif
