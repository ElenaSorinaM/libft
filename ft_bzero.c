/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:21:12 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:17:59 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}

/*
 * void ft_bzero(void *s, size_t n);

int main() {
    char data[10];  // Crea un array di caratteri di dimensione 10

    // Stampa il contenuto dell'array prima di azzerarlo
    printf("Contenuto prima di azzerare: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    // Utilizza la funzione ft_bzero per azzerare il blocco di memoria
    ft_bzero(data, sizeof(data));

    // Stampa il contenuto dell'array dopo averlo azzerato
    printf("\nContenuto dopo aver azzerato: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
*/
