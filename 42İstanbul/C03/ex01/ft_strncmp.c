/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:40:46 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/11 15:40:46 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d\n", ft_strncmp("Artifdora", "Aksifdora", 5));
	printf("%d\n", ft_strncmp("Akifdora", "akif dora", 5));
	printf("%d\n", ft_strncmp("akifdora", "akifdora", 5));
	
	printf("%d\n", strncmp("Arifdora", "Akifdora", 5));
	printf("%d\n", strncmp("Akifdora", "akif dora", 5));
	printf("%d", strncmp("akifdora", "akifdora", 5));
}*/