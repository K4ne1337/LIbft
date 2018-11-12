/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:38:40 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/12 15:18:16 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
