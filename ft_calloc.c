/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:39:39 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:37:38 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*calloc alloca una zona di memoria, la inizializza a zero e 
 restituisce un puntatore a questa zona di memoria. 
 La funzione gestisce anche il caso in cui l'allocazione di 
 memoria non riesca, restituendo NULL in quel caso. 
 Questa funzione è spesso utilizzata per l'allocazione 
 di array di elementi in C, garantendo che siano inizializzati a zero.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/*


int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *int_array;

    int i = 0;
    while (i < num_elements) {
        int_array = (int *)ft_calloc(num_elements, element_size);
        if (int_array == NULL) {
            printf("Errore nell'allocazione di memoria.\n");
            break;
        }

        if (i == 0) {
            printf("Memoria allocata e inizializzata correttamente:\n");
        }

        printf("int_array[%d] = %d\n", i, int_array[i]);
        i++;
    }

    while (i < num_elements) {
        free(int_array);
        i++;
    }

    return 0;
}
*/
