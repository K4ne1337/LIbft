#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (0);
}

int	main()
{
	char	str[10] = "Salut";
	char	str2[15] = "Lebestever";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_strncat(str,str2,6);
	ft_putstr(str);
	return (0);
}
