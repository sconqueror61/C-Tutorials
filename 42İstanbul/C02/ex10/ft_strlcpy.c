/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:35:46 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 23:35:46 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}

int main()
{
    char source[] = "Merhaba, Dunya!";
    char destination[20];

    unsigned int copiedChars = ft_strlcpy(destination, source, 17);

    printf("Kopyalanan karakter sayisi: %u\n", copiedChars);
    printf("Hedef dizi: %s\n", destination);

    return 0;
}
