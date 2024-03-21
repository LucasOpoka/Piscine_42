/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:09:35 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/22 19:20:36 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	recursive_core(int nb, int *res)
{
	if (nb > 0)
	{
		*res *= nb;
		recursive_core(nb - 1, res);
	}
}

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	recursive_core(nb, &res);
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	return (0);
}*/
