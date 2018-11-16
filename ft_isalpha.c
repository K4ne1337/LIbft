#include "libft.h"

int	ft_isalpha(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else
		return(0);
}
