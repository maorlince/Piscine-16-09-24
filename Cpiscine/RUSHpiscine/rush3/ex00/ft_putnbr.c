/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:01:42 by thodavid          #+#    #+#             */
/*   Updated: 2024/10/05 17:03:05 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
        int     res;

        res = 0;
        if (nb < 0)
        {
                ft_putchar('-');
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + 48);
        }
}
