/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:41:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/16 18:35:23 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;
	unsigned int	i;

	temp = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (temp);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Momina";
	char dest1[100] = "Lukasz <3";
	char dest2[100] = "Lukasz <3";
	unsigned int i = 4;
	
	ft_strncat(dest1, src, i);
	strncat(dest2, src, i);
	printf("my %s\nog %s", dest1, dest2);	
	return 0;
}*/
