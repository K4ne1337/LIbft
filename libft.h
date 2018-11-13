#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, size_t n);
#endif
