/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemirc <sedemirc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:29:07 by sedemirc          #+#    #+#             */
/*   Updated: 2023/09/05 00:29:07 by sedemirc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main()
{
    int number = 0; // Bir tamsayı değişkeni oluşturuyoruz ve başlangıç değeri 0.
    
    ft_ft(&number); // ft_ft fonksiyonunu çağırıyoruz ve number değişkeninin adresini gönderiyoruz.
    
    printf("Number: %d\n", number); // Değişikliği kontrol etmek için number'ı yazdırıyoruz. %d verinin tam sayı olmasını ister.

    return 0;
}