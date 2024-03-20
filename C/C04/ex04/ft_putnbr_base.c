/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:45:11 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/17 11:21:03 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long	ft_strlen(char *str)
{
	long	i;

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

void	put_conv_base(long n, long b_len, char *base)
{
	char	c;

	if (n / b_len > 0)
		put_conv_base(n / b_len, b_len, base);
	c = base[n % b_len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;
	long	b_len;

	if (!(ft_strlen(base) >= 2 && no_pl_mi(base) && no_dupl(base)))
		return ;
	else
	{
		l_nbr = (long) nbr;
		if (l_nbr < 0)
		{
			write(1, "-", 1);
			l_nbr *= -1;
		}
		b_len = ft_strlen(base);
		put_conv_base(l_nbr, b_len, base);
	}
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "0123456789ABCDEF";
	char str2[] = "01";
	ft_putnbr_base(-1310000000, str2);
	return 0;
}*/
