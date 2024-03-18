/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:33:22 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/16 19:23:28 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Monika";
	char str1[7];

	printf("%u", ft_strlcpy(str1, str, 4));
	printf("\n%s", str1);
}*/
