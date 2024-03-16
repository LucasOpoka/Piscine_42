/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:08:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/10 18:09:55 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	s;

	if (n < 0)
	{
		s = 'N';
	}
	else
	{
		s = 'P';
	}
	write(1, &s, 1);
}
