/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarreta <ygarreta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:54:10 by ygarreta          #+#    #+#             */
/*   Updated: 2022/07/12 16:20:34 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	aux(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = x;
	j = y;
	while (j > 0)
	{
		aux(i, j, x, y);
		i = x;
		write(1, "\n", 1);
		j--;
	}
}

void	aux(int i, int j, int x, int y)
{
	while (i > 0)
	{
		if ((j == 1 || j == y) && i == x)
		{
			ft_putchar('A');
		}
		else if ((j == 1 || j == y) && i == 1)
		{
			ft_putchar('C');
		}
		else if ((j == 1 || j == y) || (i == 1 || i == x))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i--;
	}
}
