/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:03:41 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/03 14:03:41 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(char v[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(v[i++]);
	}
	if (v[0] != '9' - n + 1)
	{
		write(1, ", ", 2);
	}
}

void	check_range(int n)
{
	if (n <= 0 || n > 10)
	{
		write(1, "Insert an 0 < n < 10\n", 22);
		return ;
	}
}

void	ft_print_combn(int n)
{
	char	v[10];
	int		i;

	i = 0;
	check_range(n);
	while (i < n)
	{
		v[i++] = i + '0';
	}
	while (v[0] <= '9' - n + 1)
	{
		print_comb(v, n);
		++v[n - 1];
		i = n - 1;
		while (i > 0 && v[i] > '9' - (n - i - 1))
		{
			++v[i - 1];
			v[i] = v[i - 1] + 1;
			--i;
		}
	}
}
