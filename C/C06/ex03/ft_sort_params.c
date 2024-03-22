/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:58:49 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/22 11:54:58 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_str_arr(char **arr, int size)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(arr[i], arr[i + 1]) > 0)
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		argv++;
		ft_sort_str_arr(argv, argc - 1);
		i = 0;
		while (i < argc - 1)
		{
			while (*argv[i])
				write(1, argv[i]++, 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
