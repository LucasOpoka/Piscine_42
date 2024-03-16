/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:19:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/15 15:07:43 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rc(char c, int lvl, int comb, char *s)
{
	while (c <= '9')
	{
		s[lvl] = c;
		if (lvl < comb)
		{
			rc(c + 1, lvl + 1, comb, s);
		}
		else if (lvl == comb)
		{
			if (!(s[0] == '0' && s[lvl] == lvl + 48))
			{
				write (1, ", ", 2);
			}
			write (1, s, comb + 1);
		}
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	s[11];

	s[n] = 1;
	rc('0', 0, n - 1, s);
}
