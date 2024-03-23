/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:54:44 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/23 11:42:26 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *) malloc((max - min) * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i++] = min++;
	}
	return (arr);
}
/*#include <stdio.h>
int main(void)
{
	int *pt = ft_range(1,23);
	for (int i=0; i<22; i++) printf("%d\n", pt[i]);
	return 0;
}*/
