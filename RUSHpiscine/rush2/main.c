/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:36:05 by mlemerci          #+#    #+#             */
/*   Updated: 2024/09/28 16:39:38 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc != 17)
		return (0);
	while (i < 17)
	{
		if (argv[i] < '1' || argv[i] > '4')
			return (0);
		i++;
	}
