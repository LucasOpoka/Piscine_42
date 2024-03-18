/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:28:03 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/17 13:57:49 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	c_to_h(char c)
{
	if (c <= 9)
		return (c + 48);
	else
		return (c + 87);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*u_str;
	char			arr[3];
	int				i;

	arr[0] = '\\';
	u_str = (unsigned char *) str;
	i = 0;
	while (u_str[i])
	{
		if (' ' <= u_str[i] && u_str[i] <= '~')
		{
			write (1, &u_str[i], 1);
		}
		else
		{
			arr[1] = c_to_h(u_str[i] / 16);
			arr[2] = c_to_h(u_str[i] % 16);
			write(1, arr, 3);
		}
		i++;
	}
}
/*int	main(void)
{
	char str[] = "ab	cde\nfghij";
	ft_putstr_non_printable(str);
	return 0;
}*/
