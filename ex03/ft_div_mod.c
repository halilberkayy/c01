/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasahin <hasahin@k1m22s09.42istanbul.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:26:47 by hasahin           #+#    #+#             */
/*   Updated: 2022/09/04 23:33:27 by hasahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int c;
	int d;
	int a = 40;
	int b = 5;
	ft_div_mod(a, b, &c, &d);
	printf("%d, %d", a, b);
		return(0);
}
*/
