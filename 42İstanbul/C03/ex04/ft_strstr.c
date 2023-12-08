/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:43:00 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/12 14:43:00 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	else
	{
		while (str[i])
		{
			j = 0;
			while (str[i + j] == to_find[j] && str[i])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
}

/*int	main()
{
	char str[] = "Bize her yer TRABZON";
	char to_find[] = "TRABZON";
	printf("%s", ft_strstr(str, to_find));
}*/