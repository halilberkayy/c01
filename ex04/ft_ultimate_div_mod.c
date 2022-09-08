/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasahin <hasahin@k1m22s09.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:57:53 by hasahin           #+#    #+#             */
/*   Updated: 2022/09/04 23:58:35 by hasahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a / *b;
	*a = div;
	*b = mod;
}
/*
int main()
{
	int	c;
	int	d;

	c = 10;
	c = 5;	
	ft_ultimate_div_mod(&c, &d);
	printf("%d, %d", c, d);
}
*/
