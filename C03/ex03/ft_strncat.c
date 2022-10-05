/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:51:59 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/21 10:54:30 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0' && i < nb)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}
