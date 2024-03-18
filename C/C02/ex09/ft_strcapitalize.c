/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:46:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/13 17:25:29 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (is_lower(str[i]))
				str[i] -= 32;
		}
		else if (!is_lower(str[i - 1]) && !is_upper(str[i - 1])
			&& !is_num(str[i - 1]))
		{
			if (is_lower(str[i]))
				str[i] -= 32;
		}
		else if (is_lower(str[i - 1]) || is_upper(str[i - 1])
			|| is_num(str[i - 1]))
		{
			if (is_upper(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
