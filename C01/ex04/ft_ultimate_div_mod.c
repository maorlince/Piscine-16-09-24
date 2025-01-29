/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:56:11 by mlemerci          #+#    #+#             */
/*   Updated: 2024/09/26 15:24:23 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 10;
	nbr2 = 2;
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("a = %d, b = %d\n", nbr1, nbr2);
	return (0);
}*/
