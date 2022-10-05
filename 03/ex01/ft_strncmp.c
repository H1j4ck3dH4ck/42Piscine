/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:15:00 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/21 10:50:09 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n) && !diff)
	{
		diff = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
		diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (diff);
}
