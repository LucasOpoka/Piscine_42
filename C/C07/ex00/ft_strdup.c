/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:25:56 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/24 17:39:16 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_strcpy(new, src);
	return (new);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "lalalalalala";
	char *new = ft_strdup(str);
	printf("%p %s\n%p %s", str, str, new, new);
	return 0;
}*/
