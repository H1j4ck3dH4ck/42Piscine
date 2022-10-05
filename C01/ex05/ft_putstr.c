/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:15:28 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/15 13:46:33 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}
/*
#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Hello, world!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
*/
