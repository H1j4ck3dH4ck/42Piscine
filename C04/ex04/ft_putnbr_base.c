/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:21:18 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/26 12:47:25 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	c = base[n % size];
	write(1, &c, 1);
}

int	ft_ver_bas(char *base)
{
	int	a;

	a = 0;
	while (base[a] != '\0')
	{
		if (base[a] == '+' || base[a] == '-' || base[a] == base[a + 1])
			return (0);
		a++;
	}
	if (a <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	h;

	h = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[h] != '\0')
			h++;
		ft_putnbr_base_rec(nbr, base, h);
	}
}
