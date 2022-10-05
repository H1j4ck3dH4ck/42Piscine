/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:49:35 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/21 10:58:09 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			if (to_find[c + 1] == '\0')
				return (&str[i]);
			c++;
		}
		i++;
	}
	return (0);
}
