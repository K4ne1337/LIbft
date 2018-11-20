#include "libft.h"

static	size_t	ft_count_words(const char *s, char c)
{
	size_t i;
	size_t y;

	i = 0;
	y = 0;
	while (s[y] != '\0')
	{
		while (s[y] != '\0' && s[y] == c)
			y++;
		if (s[y] != '\0')
			i++;
		while (s[y] != '\0' && s[y] != c)
			y++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	size_t y;
	size_t len;
	char **tab;

	i = 0;
	y = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0' && s[y] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		y = i;
		while (s[y] != '\0' && s[y] != c)
			y++;
		tab[len++] = ft_strsub(s, i, len - i);
		i = len;
	}
	tab[ft_count_words(s, c)] = 0;
	return (tab);
}
