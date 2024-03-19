/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:29:34 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/17 13:05:05 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (!s1[i])
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "abcee";
	char str2[] = "abceeee";
	unsigned int i = 6;

	printf("my %d og %d", ft_strncmp(str1, str2, i), strncmp(str1, str2, i));
	return 0;
}*/
