#include "libft.h"
/*La funzione ft_split prende in input una stringa s e un carattere c e suddivide la stringa in un array di stringhe, dove ciascuna stringa nell'array è separata dalla stringa originale da uno o più caratteri c. La funzione restituisce un array di puntatori a stringhe char **, dove ogni elemento dell'array è una parola estratta dalla stringa s. L'array termina con un puntatore NULL.

Ecco come funziona la funzione ft_split:

Viene allocato dinamicamente un array di puntatori a stringhe lst con dimensione (ft_countword(s, c) + 1) per tenere traccia delle parole separate. L'aggiunta di 1 alla dimensione è per includere l'ultimo elemento NULL nell'array, che segna la fine dell'elenco delle parole.

Viene verificato se il puntatore s è nullo o se l'allocazione di memoria per lst fallisce. In caso di uno di questi errori, la funzione restituisce NULL, indicando un errore.

Si inizializza un contatore i a 0, che sarà utilizzato per tenere traccia degli indici dell'array lst.

La funzione quindi inizia a esaminare la stringa s carattere per carattere:

Viene saltata qualsiasi sequenza di caratteri c all'inizio della stringa.

Si calcola la lunghezza della parola corrente, che può essere determinata cercando il prossimo carattere c nella stringa. Se non viene trovato alcun carattere c, la parola si estende fino alla fine della stringa.

Viene utilizzata la funzione ft_substr per creare una copia della parola corrente e l'indirizzo di questa parola viene assegnato all'elemento corrispondente nell'array lst.

La stringa s viene quindi spostata in avanti per puntare al carattere successivo dopo la parola corrente.

Questo processo viene ripetuto finché la stringa s non è stata completamente analizzata.

Alla fine, l'ultimo elemento dell'array lst viene impostato su NULL per indicare la fine dell'elenco delle parole.

L'array lst contenente le parole separate viene restituito come risultato della funzione.

In sintesi, ft_split prende una stringa e un carattere separatore, divide la stringa in parole basate su quel separatore e restituisce un array di puntatori alle parole. È importante notare che l'utente deve deallocare manualmente la memoria allocata per le singole parole e per l'array lst quando non ne ha più bisogno per evitare perdite di memoria.*/

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Assumiamo che libft.h contenga la dichiarazione di ft_split

int main() {
    const char *input = "Questo è un esempio di divisione di stringa.";
    char separator = ' '; // Carattere separatore

    char **word_array = ft_split(input, separator);

    if (word_array) {
        // Stampa le parole separate
        printf("Parole separate:\n");
        for (int i = 0; word_array[i] != NULL; i++) {
            printf("%s\n", word_array[i]);
        }

        // Dealloca la memoria allocata per le parole e per l'array
        for (int i = 0; word_array[i] != NULL; i++) {
            free(word_array[i]);
        }
        free(word_array);
    } else {
        printf("Errore durante la divisione della stringa.\n");
    }

    return 0;
}
