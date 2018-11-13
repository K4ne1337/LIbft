#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t n)
{
	int len_dest;
	int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (n < len_dest)
		return (n + len_src);
	else
		ft_strncat(dest, src, n - len_dest - 1);
	return (len_dest + len_src);
}
