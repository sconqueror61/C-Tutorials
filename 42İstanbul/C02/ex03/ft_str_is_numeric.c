/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:45:13 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 13:45:13 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d", ft_str_is_numeric("05092000"));
	printf("\n%d", ft_str_is_numeric("0509akif2000"));
	printf("\n%d", ft_str_is_numeric(".(akif05dora_?"));
}