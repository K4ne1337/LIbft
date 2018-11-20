#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t i;
	size_t y;
	size_t len;
	char *fresh;

	len = ft_strlen(s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
			len--;
		}
		else
			i++;
	}
	fresh = (char *)malloc(sizeof(char) * len + 1);
	if (fresh == NULL)
		return (NULL);
	i = 0;
	y = 0;
	while(s[i] != '\0')
	{
		if (s[i] ==  ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
		{
			fresh[y] = s[i];
			i++;
			y++;
		}
	}
	fresh[y] = '\0';
	return (fresh);
}
