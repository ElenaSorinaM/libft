#include "libft.h"
/*Valor devuelto: La string que represente el número.
NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.*/

/*La funzione ft_itoa prende un numero intero n come input e restituisce una nuova stringa contenente la rappresentazione testuale di quel numero. La funzione converte il numero intero n in una stringa di caratteri corrispondenti ai suoi cifre.

Ecco come funziona la funzione ft_itoa:

Viene calcolata la lunghezza della stringa risultante necessaria per memorizzare il numero n. Questo viene fatto utilizzando la funzione ft_numlen, che non è inclusa nel codice fornito ma presumibilmente calcola la lunghezza di un numero intero.

Viene allocato dinamicamente un array di caratteri ret della dimensione necessaria più uno per il terminatore NULL.

Se il numero n è uguale a 0, viene impostato il primo carattere dell'array ret a '0' e la stringa viene terminata con NULL.

Se il numero n è negativo, viene impostato il primo carattere dell'array ret a '-' per rappresentare il segno negativo. Quindi, il valore di n viene convertito in positivo per semplificare la manipolazione delle cifre.

Viene iniziato un ciclo while per convertire il numero n in una sequenza di caratteri. Il ciclo continua fintanto che n non diventa zero.

All'interno del ciclo, il resto della divisione di n per 10 viene convertito in un carattere corrispondente utilizzando la tabella digits che contiene i caratteri '0' - '9'. Il carattere risultante viene memorizzato nella posizione appropriata dell'array ret, partendo dalla fine e procedendo verso l'inizio della stringa.

Dopo aver convertito una cifra, n viene diviso per 10 per passare alla cifra successiva.

Alla fine del ciclo, la stringa ret contiene la rappresentazione testuale del numero n, compreso il segno negativo se n era negativo.

La stringa ret viene restituita come risultato della funzione.

Ricorda di deallocare la memoria allocata per la stringa ret quando non ne hai più bisogno utilizzando la funzione free, altrimenti potresti incorrere in una perdita di memoria.*/
char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789";

	len = ft_numlen(n, 10);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % 10];
		else
			ret[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}