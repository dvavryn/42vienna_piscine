/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:57:30 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/07 21:58:59 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i = 42;
	int i_= i;
	int j = 8;
	int j_ = j;

	int *pt1 = &i;
	int *pt2 = &j;

	ft_ultimate_div_mod(pt1, pt2);
	printf("%i / %i = %i | %i R", i_, j_, i, j);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	numa;
	int	numb;
	int	result;
	int	rest;

	if (numb != 0)
	{
		numa = *a;
		numb = *b;
		result = numa / numb;
		rest = numa % numb;
		*a = result;
		*b = rest;
	}
}
