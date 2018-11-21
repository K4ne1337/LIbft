#include "libft.h"

char *ft_strtrim(char const *s)
{
	unsigned int i;
	unsigned int y;

	if (!s)
		return (NULL);
	if (!*s)
		return ((char *)s);
	i = 0;
	y = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == ft_strlen(s))
		return (ft_strsub(s, i, y));
	while (s[y] ==  ' ' || s[y] == '\n' || s[y] == '\t')
		y--;
	return (ft_strsub(s, i, (y - i + 1)));
}
