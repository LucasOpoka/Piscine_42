/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:20:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/18 13:40:02 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rec_core(int nb, int power, int *res)
{
	if (power > 0)
	{
		*res *= nb;
		rec_core(nb, power - 1, res);
	}
}

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	rec_core(nb, power, &res);
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(9, 9));
	return 0;
}*/
