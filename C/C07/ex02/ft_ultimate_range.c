/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:51 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/25 14:36:19 by lopoka           ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	else
		return (max - min);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int **pt = (int **) malloc(sizeof(int*));
   	ft_ultimate_range(pt, 1, 23);
	for (int i=0; i<22; i++)
        printf("%d\n", pt[0][i]);
	return 0;
}*/
