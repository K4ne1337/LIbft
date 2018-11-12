/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:41:31 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/12 15:15:54 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmp;
	const char *tmp2;

	tmp = (char *)dst;
	tmp2 = (char *)src;
	while (n--)
	{
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	return (tmp);
}
