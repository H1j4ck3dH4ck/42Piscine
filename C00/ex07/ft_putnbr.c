/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:55:19 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/26 13:53:51 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar (nb + 48);
		return ;
	}
	else
		ft_putnbr (nb / 10);
	ft_putnbr (nb % 10);
}
