/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 01:55:11 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 01:55:11 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main()
{
	char ali;
	char *str;
	*str = &ali;
	char ali = "42Kocaeli";
	ft_putstr(ali);
}