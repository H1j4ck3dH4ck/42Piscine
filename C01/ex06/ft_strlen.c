/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:29:52 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/19 17:10:00 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*
#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Victor";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
*/
