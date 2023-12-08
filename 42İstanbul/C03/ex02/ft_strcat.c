/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:59:33 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/11 15:59:33 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x])
	{
		x++;
	}
	y = 0;
	while (src[y])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "Doraaa";
	char dest[] = "Akif ";
	printf("%s", ft_strcat(dest, src));
}*/