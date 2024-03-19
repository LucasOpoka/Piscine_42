/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:41:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/16 10:44:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
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
	ft_strcat(dest1, src);
	strcat(dest2, src);
	printf("my %s\nog %s", dest1, dest2);	
	return 0;
}*/
