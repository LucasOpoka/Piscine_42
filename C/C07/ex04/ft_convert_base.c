/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:10:43 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/25 14:42:51 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

long	ft_strlen(char *str);
int		no_pl_mi(char *str);
int		no_dupl(char *str);
int		c_in_base(char c, char *base);

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

void	pt_nw_bs(long n, long len, long *ng_x_tl, char **bs_x_rs)
{
	long	indx;

	if (n < 0)
	{
		ng_x_tl[0] = 1;
		len += 1;
		n *= -1;
	}
	if (n / ft_strlen(bs_x_rs[0]) > 0)
		pt_nw_bs(n / ft_strlen(bs_x_rs[0]), len + 1, ng_x_tl, bs_x_rs);
	if (n / ft_strlen(bs_x_rs[0]) == 0)
	{
		bs_x_rs[1] = (char *) malloc((len + 1) * sizeof(char));
		if (!bs_x_rs[1])
			return ;
		ng_x_tl[1] = len;
		bs_x_rs[1][len + 1] = 0;
	}
	if (ng_x_tl[0])
		indx = ng_x_tl[1] - len + 1;
	else
		indx = ng_x_tl[1] - len;
	bs_x_rs[1][indx] = bs_x_rs[0][n % ft_strlen(bs_x_rs[0])];
	if (ng_x_tl[0])
		bs_x_rs[1][0] = '-';
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;
	long	*ng_x_tl;
	char	**bs_x_rs;

	if (!(ft_strlen(base) >= 2 && no_pl_mi(base) && no_dupl(base)))
		return (0);
	else
	{
		l_nbr = (long) nbr;
		ng_x_tl = (long *) malloc(2 * sizeof(long));
		if (!ng_x_tl)
			return (0);
		ng_x_tl[0] = 0;
		bs_x_rs = (char **) malloc(2 * sizeof(char *));
		if (!bs_x_rs)
			return (0);
		bs_x_rs[0] = base;
		pt_nw_bs(l_nbr, 0, ng_x_tl, bs_x_rs);
	}
	return (bs_x_rs[1]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!(ft_strlen(base_from) >= 2 && no_pl_mi(base_from)
			&& no_dupl(base_from)))
		return (0);
	if (!(ft_strlen(base_to) >= 2 && no_pl_mi(base_to) && no_dupl(base_to)))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(n, base_to));
}
/*#include <stdio.h>
int main(void)
{
	char nbr[] = "  		++++-+++--175517";
	char base[] = "0123456789";
	char new_base[] = "01";
	printf("%s\n", ft_convert_base(nbr, base, new_base));
}*/
