/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:43:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/24 13:45:20 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
