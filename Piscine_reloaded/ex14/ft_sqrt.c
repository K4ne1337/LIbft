/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:31:20 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/09 13:54:30 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int i;

	i = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i != nb)
	{
		if (i == 0)
			return (0);
		i = i - 1;
	}
	return (i);
}
