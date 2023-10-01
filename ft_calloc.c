void	*ft_calloc(size_t count, size_t size)
{
    void	*ptr; //puntatore verrà utilizzato per memorizzare l'indirizzo di memoria della regione allocata

	ptr = malloc(count * size); //utilizza la funzione malloc per allocare una regione di memoria di dimensione count * size byte. 
	if (ptr == NULL)
    /*Se malloc non riesce ad allocare la memoria richiesta (ad esempio, a causa di esaurimento della memoria disponibile), 
    restituirà NULL. In tal caso, la funzione ft_calloc restituirà subito NULL*/
		return (ptr);
	ft_bzero(ptr, size * count);
    /*
    Se malloc ha avuto successo nell'allocazione di memoria, questa riga utilizza la funzione ft_bzero per impostare tutti i byte 
    nella regione di memoria allocata a zero. Questo passo è importante perché calloc restituisce una memoria inizializzata a zero, 
    a differenza di malloc, che potrebbe restituire una memoria con valori residui.
    */
	return (ptr);
}

/*
int main() {
  int n, i, *ptr, sum = 0;
  printf("Inserisci il numero di elementi: ");
  scanf("%d", &n);
  ptr = (int*) ft_calloc(n, sizeof(int));
  if(ptr == NULL) {
    printf("Errore! La memoria non è stata allocata.");
    exit(0);
  }
  printf("Inserisci gli elementi: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }
  printf("Somma = %d", sum);
  free(ptr);
  return 0;
}

*/