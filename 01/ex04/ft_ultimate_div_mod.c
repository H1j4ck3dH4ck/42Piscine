/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:39:51 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/19 12:06:29 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	if (*b != 0)
	{
		div = (*a) / (*b);
		res = (*a) % (*b);
		*a = div;
		*b = res;
	}
}
/*
 #include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i should be 7 and it is : %u\n",*a);
	printf("j should be 3 and it is : %u",*b);
}
*/
