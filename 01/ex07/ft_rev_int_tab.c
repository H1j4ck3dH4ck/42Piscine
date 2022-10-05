/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:45:29 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/15 12:45:02 by vimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	temp;

	c = 0;
	i = size -1;
	while (c < (size / 2))
	{
		temp = tab[c];
		tab[c] = tab[i];
		tab[i] = temp;
		c++;
		i--;
	}	
}
/*
#include <stdio.h>
 
void	ft_rev_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {1, 2, 3, 4};
	int size;
	
	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
*/
