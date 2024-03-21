/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:09:14 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/24 15:30:10 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	valid(char r, int c, char *brd)
{
	int	vld;
	int	d;

	vld = 1;
	d = 1;
	while (c - d >= 0)
	{
		if (brd[c - d] == r || brd[c - d] - d == r
			|| brd[c - d] + d == r || r < '0' || r > '9')
			vld = 0;
		d++;
	}
	return (vld);
}

void	rec_core(int cl, char *board, int *res)
{
	char	rw;

	rw = '0';
	while (rw <= '9' && cl < 10)
	{
		if (valid(rw, cl, board))
		{
			board[cl] = rw;
			rec_core(cl + 1, board, res);
		}
		rw++;
	}
	if (cl == 9 && valid(board[9], cl, board))
	{
		write(1, board, 10);
		write(1, "\n", 1);
		*res += 1;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		res;

	res = 0;
	rec_core(0, board, &res);
	return (res);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return 0;
}
