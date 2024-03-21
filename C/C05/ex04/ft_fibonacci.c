/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:47:36 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/18 14:36:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rec_core(int prev, int curr, int index, int *res)
{
	if (index - 1 > 0)
		rec_core(curr, curr + prev, index - 1, res);
	if (index - 1 == 0)
		*res = curr;
}

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	rec_core(0, 1, index, &res);
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_fibonacci(3));
	return 0;
}*/
