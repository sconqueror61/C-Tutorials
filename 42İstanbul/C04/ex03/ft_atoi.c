/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:42:18 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/12 16:42:18 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * s);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "   ---~+--+01234506789ab567";
// 	printf("%d", ft_atoi(s));
// }
