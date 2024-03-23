/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:45:10 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/24 17:44:03 by lopoka           ###   ########.fr       */
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

int	tot_len(int size, char **strs, char *sep)
{
	int	t_len;
	int	i;

	i = 0;
	t_len = 0;
	while (i < size)
		t_len += ft_strlen(strs[i++]);
	t_len += ft_strlen(sep) * (size - 1) + 1;
	return (t_len);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	char	*res;
	char	*temp;
	int		i;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	t_len = tot_len(size, strs, sep);
	res = (char *) malloc(t_len * sizeof(char));
	if (!res)
		return (0);
	temp = res;
	i = 0;
	while (i < size)
	{
		res = ft_strncpy(res, strs[i], ft_strlen(strs[i]));
		if (i != size - 1)
			res = ft_strncpy(res, sep, ft_strlen(sep));
		i++;
	}
	*res = '\0';
	return (temp);
}
/*#include <stdio.h>
int main(void)
{
	char *str[] = {"Monikaaaaaaaaa", "Lukaszzzzzzz", "KonstantyX"};
	char sep[] = " i ";
	printf("%s\n", ft_strjoin(3, str, sep));
	return 0;
}*/
