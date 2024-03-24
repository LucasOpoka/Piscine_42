/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:13:47 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/25 16:39:00 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_strcpy(new, src);
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*nw_arr_pt;
	int					i;

	nw_arr_pt = (struct s_stock_str *) malloc ((ac + 1)
			* sizeof(struct s_stock_str));
	if (!nw_arr_pt)
		return (0);
	i = 0;
	while (i < ac)
	{
		nw_arr_pt[i].size = ft_strlen(av[i]);
		nw_arr_pt[i].str = av[i];
		nw_arr_pt[i].copy = ft_strdup(av[i]);
		i++;
	}
	nw_arr_pt[ac].str = 0;
	return (nw_arr_pt);
}
