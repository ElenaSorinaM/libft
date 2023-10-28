/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:36:28 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:14:15 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = c;
	}
	return (b);
}

/*

int main() {
    char buffer[20];  // Creiamo un array di caratteri di dimensione 20.
	ft_memset(buffer, 65, 5);

    int i = 0;
    while (i < 20) {
        printf("%c ", buffer[i]);
        i++;
    }

    return 0;
}
 */

/*
 void *b: Questo è un puntatore al blocco di memoria che si desidera impostare.
int c: Il valore che si desidera impostare nel blocco di memoria. s
ize_t len: Il numero di byte che si desidera impostare nel blocco di memoria.
 * */
