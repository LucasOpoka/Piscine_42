/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:58:11 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/17 10:32:46 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_h(int n, int first)
{
	char	c;

	if (n / 16 > 0)
		put_h(n / 16, 0);
	if (n / 16 == 0 && first)
		write(1, "0", 1);
	if (n % 16 <= 9)
		c = n % 16 + 48;
	else
		c = n % 16 + 87;
	write(1, &c, 1);
}

void	put_pt(unsigned long pt, int lvl)
{
	char	c;

	if (pt / 16 > 0)
		put_pt(pt / 16, lvl + 1);
	if (pt / 16 == 0)
	{
		while (lvl++ != 16)
			write(1, "0", 1);
	}
	if (pt % 16 <= 9)
		c = pt % 16 + 48;
	else
		c = pt % 16 + 87;
	write(1, &c, 1);
	if (lvl == 1)
		write(1, ":", 1);
}

void	prnt_row_end(unsigned char *c_addr, unsigned int size,
		unsigned int byte, unsigned int rstrt)
{
	int		c;
	int		row_size;

	write(1, " ", 1);
	if (byte < size)
		row_size = 16;
	else
		row_size = size - rstrt;
	c = 0;
	while (c < row_size)
	{
		if (c_addr[rstrt] < 32 || 126 < c_addr[rstrt])
			write(1, ".", 1);
		else
			write(1, &c_addr[rstrt], 1);
		rstrt++;
		c++;
	}
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	arr[5];
	unsigned char	*c_addr;

	c_addr = (unsigned char *) addr;
	arr[2] = size / 16 + (size % 16 != 0);
	arr[0] = 0;
	arr[3] = 0;
	while (arr[0] < arr[2])
	{
		put_pt((unsigned long) &c_addr[arr[3]], 1);
		arr[1] = 0;
		arr[4] = arr[3];
		while (arr[1] < 16)
		{
			if (arr[1]++ % 2 == 0)
				write(1, " ", 1);
			if (arr[3] < size)
				put_h(c_addr[arr[3]], 1);
			else
				write(1, "  ", 2);
			arr[3]++;
		}
		prnt_row_end(c_addr, size, arr[3], arr[4]);
		arr[0]++;
	}
}

/*int	main(void)
{
	char *str = "Bonjour les aminches...c. est fou.tou
	t.ce qu on peut faire avec...print_memory....lol.lol. .";
	ft_print_memory(str, 92);
	return 0;
}*/
