/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algadea <algadea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:01:18 by algadea           #+#    #+#             */
/*   Updated: 2024/09/21 15:19:58 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int width, int height)
{
	int	x;
	int	y;

	if (width == 0 && height == 0)
		return ;
	y = 0;
	while (y <= height)
	{
		x = 0;
		while (x <= width)
		{
			if ((x == 0 && y == 0) || (x == 0 && y == height)
				|| (y == 0 && x == width) || (x == width && y == height))
				ft_putchar('o');
			else if (x == 0 || x == width)
				ft_putchar('|');
			else if (y == 0 || y == height)
				ft_putchar('-');
		
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
