/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:50:45 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/16 18:27:35 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size == 0 || size <= d_len)
		return (s_len + size);
	i = d_len;
	while (i < (size - 1) && *src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = 0;
	return (d_len + s_len);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20] = "Momina"; 
    char str3[20] = "Momina";
    char str2[20] = "Lukasz";
    char str4[20] = "Lukasz";
	unsigned int i = 3;
    
	int a = ft_strlcat(str1, str2, i);
	printf("my %d %s\n", a, str1);

	int b = strlcat(str3, str4, i);
	printf("og %d %s\n", b, str3);
    return 0;
}*/
