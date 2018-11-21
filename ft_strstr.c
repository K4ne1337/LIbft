#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n;
	size_t start;

	i = 0;
	if(!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		n = 0;
		start = i;
		while (haystack[i] == needle[n])
		{
			if (!needle[n + 1])
				return ((char *)haystack + start);
			i++;
			n++;
		}
		i++;
	}
	return (NULL);
}
