/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:03:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/23 11:18:21 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	no_pl_mi(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	no_dupl(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (str[i])
	{
		j = 0;
		count = 0;
		while (str[j])
		{
			if (str[i] == str[j])
				count++;
			j++;
		}
		if (count > 1)
			return (0);
		i++;
	}
	return (1);
}

int	c_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	b_len;

	b_len = ft_strlen(base);
	if (!(b_len >= 2 && no_pl_mi(base) && no_dupl(base)))
		return (0);
	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (c_in_base(*str, base))
	{
		res = res * b_len + c_in_base(*str, base) - 1;
		str++;
	}
	return (res * sign);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "   		\t\t\t\t\t\t\r\r\r\r\r\r\r   ++++--+++7FFFFFF";
	char base[] = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base(str, base));
	return 0;
}*/
