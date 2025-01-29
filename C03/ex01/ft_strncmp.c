/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:11:50 by mlemerci          #+#    #+#             */
/*   Updated: 2024/10/03 19:11:55 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "987611";
	char	*s2 = "987654321";
	unsigned int	n =6;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp("Ceci est un test", "est", 0));
	printf("%d\n", strncmp("Ceci est un test", "est", 0));
	printf("%d\n", ft_strncmp("", "est", 100));
	printf("%d\n", strncmp("", "est", 100));
}*/
