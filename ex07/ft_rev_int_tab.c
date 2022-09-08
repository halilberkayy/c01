/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasahin <hasahin@k1m22s09.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 06:31:43 by hasahin           #+#    #+#             */
/*   Updated: 2022/09/08 06:33:44 by hasahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < (size / 2))
	{
		swap = tab[a];
		tab [a] = tab [size -1 - a];
		tab [size -1 - a] = swap;
		a++;
	}
}
/*
int main()
{
	int tab[3] = {0, 1, 2};
	int size = 3;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d", tab [0], tab[1], tab[2]);
}
*/
