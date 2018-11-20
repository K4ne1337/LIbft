#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char	*fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i])
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}
