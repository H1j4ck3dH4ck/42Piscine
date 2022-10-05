/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:52:46 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/28 11:27:52 by vimunoz-         ###   ########.fr       */
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

	c = 1;
	v = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			v = 0;
			while (argv[c][v] != '\0')
			{
				ft_putchar(argv[c][v]);
				v++;
			}
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
