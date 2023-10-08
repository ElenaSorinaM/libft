/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:47:01 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/01 22:01:56 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a string and a set of characters, and returns a copy of 
 * the string with any characters that
 * are in the set removed from the beginning and end of the string
 * 
 * param char s1 The string to be trimmed.
 * param char set the characters to be trimmed from the string
 * 
  * return A pointer to a new string.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;


/*se uno dei due input è nullo, la funzione restituisce nullo*/
	if (!s1 || !set)
		return (NULL);

   /*Inizializza start a 0 e end alla lunghezza della stringa s1 meno 1. Questi valori iniziali rappresentano l'intera stringa s1.*/
	start = 0;
	end = ft_strlen(s1) - 1;

/*Questo ciclo while scorre la stringa s1 dall'inizio (da start) fino a quando trova un carattere che non è presente nella stringa set o fino a quando start supera end. In pratica, rimuove tutti i caratteri presenti in set dall'inizio della stringa.*/

	while (ft_strchr(set, s1[start]) && start <= end)
		start++;

   /*Dopo il ciclo sopra, start conterrà la nuova posizione di inizio della stringa. Se start è maggiore di end, significa che tutti i caratteri iniziali sono stati rimossi, quindi la funzione restituisce una copia della strratiinga s1 dalla posizione end + 1 utilizzando ft_strdup. In pca, questo significa che vengono rimossi tutti i caratteri iniziali che sono presenti in set.*/   
	if (start > end)
		return (ft_strdup(s1 + end + 1));

   /*Questo ciclo while scorre la stringa s1 dalla fine (da end) fino a quando trova un carattere che non è presente nella stringa set o fino a quando end diventa negativo. In pratica, rimuove tutti i caratteri finali che sono presenti in set.*/
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
     /*Alloca dinamicamente memoria per la nuova stringa str con una dimensione pari a end - start + 2. Il "+2" è necessario per includere il carattere terminatore NULL ('\0'). Se l'allocazione di memoria fallisce, la funzione restituisce NULL.*/ 
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);

   /*Copia la porzione della stringa s1 che inizia da start e finisce a end (incluso) nella nuova stringa str utilizzando ft_strlcpy. Questo assegna anche il terminatore NULL alla fine della nuova stringa.*/   
	ft_strlcpy(str, &s1[start], end - start + 2);

   /*Restituisce il puntatore alla nuova stringa str, che è una copia di s1 con i caratteri specificati in set rimossi dall'inizio e dalla fine*/
	return (str);
}

int main() {
    const char *input = "  Hello, world!  ";
    const char *set = " \t\n";
    
    char *trimmed = ft_strtrim(input, set);
    
    if (trimmed) {
        printf("Stringa originale: \"%s\"\n", input);
        printf("Stringa trimmata: \"%s\"\n", trimmed);
        free(trimmed); // Ricordati di deallocare la memoria allocata dalla funzione ft_strtrim
    } else {
        printf("Errore durante la trimmatura della stringa.\n");
    }
    
    return 0;
}