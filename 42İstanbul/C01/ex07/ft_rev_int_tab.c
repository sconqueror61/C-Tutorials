/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:59:00 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 02:59:00 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}

#include <stdio.h>

int main(void)
{
	int *tab[] = {7,3,2,8};
	int size;
	size = 4;
	int i;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}