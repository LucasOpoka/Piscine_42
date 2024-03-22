/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:29:37 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/22 12:10:12 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void) argc;
	while (*argv[0])
		write (1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
