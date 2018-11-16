#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
		ft_strcmp(s1,s2);
	return (s1[i] - s2[i]);
}
