/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:17:17 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/27 10:20:11 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;
	int	v;

	c = argc - 1;
	v = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			v = 0;
			while (argv[c][v] != '\0')
			{
				ft_putchar(argv[c][v]);
				v++;
			}
			ft_putchar('\n');
			c--;
		}
	}
	return (0);
}
