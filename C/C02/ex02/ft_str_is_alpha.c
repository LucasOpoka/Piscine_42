/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:13:10 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/13 15:24:49 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((65 <= str[i] && str[i] <= 90)
				|| (97 <= str[i] && str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
