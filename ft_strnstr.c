#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;
	size_t start;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		start = i;
		while (haystack[i] == needle[n] && i < len)
		{
			if (!needle[n + 1])
				return((char *)haystack + start);
			i++;
			n++;
		}
		i++;
	}
	return (NULL);
}
