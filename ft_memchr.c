/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:27:36 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/12 15:54:04 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char b;
	char *a;

	i = 0;
	b = (unsigned char)c;
	a = (char *)s;
	while (i < n)
	{
		if (a[i] == b)
		return (a);
		else
		return (NULL);
	}
	i++;
	return (0);
}
