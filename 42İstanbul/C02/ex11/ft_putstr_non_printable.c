/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:39:59 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 23:39:59 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(char byte)
{
	char	c;

	write(1, "\\", 2);
	if (byte / 16 > 9)
	{
		c = byte / 16 + 87;
	}
	else
	{
		c = byte / 16 + 48;
	}
	write(1, &c, 1);
	if (byte % 16 > 9)
	{
		c = byte % 16 + 87;
	}
	else
	{
		c = byte % 16 + 48;
	}
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 0 && *str < 32) || *str == 127)
			write_hex(*str); 
		
		else 
			write(1, str, 1);
		++str;
	}
}

/*int main()
{
	char	*s;

	s = "Coucou\n\v\tu vas bien ?";
	ft_putstr_non_printable(s);
}	*/