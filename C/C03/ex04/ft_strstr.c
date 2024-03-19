/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:34:01 by lopoka            #+#    #+#             */
/*   Updated: 2024/01/18 10:36:32 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp_str;
	char	*tmp_to_find;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tmp_str = str;
		tmp_to_find = to_find;
		while (*tmp_str && *tmp_to_find && *tmp_str == *tmp_to_find)
		{
			tmp_to_find++;
			tmp_str++;
		}
		if (!*tmp_to_find)
			return (str);
		str++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char str2[] = "Monika <3 Lukasz";
    char str1[] = "<";
    
    printf("%s\n%s", ft_strstr(str2, str1), strstr(str2, str1));
    return 0;
}*/
