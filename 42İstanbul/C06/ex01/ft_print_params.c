/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:10 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/12 17:10:10 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	(void)argc;
	j = 1;
	while (argv[j] != '\0')
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			ft_putchar(argv[j][k]);
			++k;
		}
		++j;
		ft_putchar('\n');
	}
}
