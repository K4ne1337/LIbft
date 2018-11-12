/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:16:45 by abelkhay          #+#    #+#             */
/*   Updated: 2018/11/09 13:51:15 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	i = 1;
	res = i;
	if (nb < 0 || nb > 12)
		return (0);
	while (i < nb)
	{
		res = res * (i + 1);
		i++;
	}
	return (res);
}
