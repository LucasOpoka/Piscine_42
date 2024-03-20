/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:22:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/23 11:16:23 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

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
	while ('0' <= *str && *str <= '9')
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (res * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[] = "     --+2143647567";
	printf("my %d\n", ft_atoi(str));
	printf("og %d\n", atoi(str));
	return 0;
}*/
