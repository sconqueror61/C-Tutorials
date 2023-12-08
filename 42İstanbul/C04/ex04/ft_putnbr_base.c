/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:46:29 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/12 16:46:29 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_index;

	base_index = 0;
	while (base[base_index])
	{
		if (base[base_index] == '+' || base[base_index] == '-')
			return ;
		++base_index;
	}
	if (base_index < 2)
	{
		return ;
	}
	print_nbr(nbr, base_index, base);
}

void	print_nbr(int n, int base_index, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar('-');
	}
	if (!n_long)
	{
		return ;
	}
	else
	{
		print_nbr(n_long / base_index, base_index, symbols);
		ft_putchar(symbols[n_long % base_index]);
	}
}

/* int		main()
 {
	int		n;
	char	*baseSymbols;

	ft_putnbr_base(61, "01");
 	puts("\n");
	ft_putnbr_base(61, "0123456789abcdef");
}*/