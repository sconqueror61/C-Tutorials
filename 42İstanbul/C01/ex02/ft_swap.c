/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 01:14:53 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 01:14:53 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}