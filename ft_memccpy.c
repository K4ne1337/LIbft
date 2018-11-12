/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:24:36 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/12 14:43:58 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void	*restrict dst, const void *restrict src, int c, size_t n)
{
	char	*tmp;
	const	char *tmp2;
	char	d;

	d = (char)c;
	tmp = (char *)dst;
	tmp2 = (char *)src;
	while ( n--)
	{
		if (*tmp2 != d)
		{
			*tmp = *tmp2;
			tmp++;
			tmp2++;
		}
		else
			return(tmp);
	}
	return (tmp);
}
