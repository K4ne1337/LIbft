#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (s == NULL || f == NULL)
		return (NULL);
	
		while (s[i])
		{
			fresh[i] = (*f)(s[i]);
			i++;
		}
	return (fresh);
}
