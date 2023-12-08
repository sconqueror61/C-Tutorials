/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:08:20 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 13:08:20 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "Seyfullah";
	char dest[] = "sconqueror61";

	printf("%s", ft_strncpy(dest, src, 2));//%s string değerini ekrana yazdırmak için kullanılır
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 6));
}