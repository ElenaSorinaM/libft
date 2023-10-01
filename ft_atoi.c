int	ft_atoi(const char *str)
{
    int	ft_atoi(const char *str)
{
	int	res;  
    /*conterrà il valore dell'intero convertito dalla stringa*/
	int	sign; 
    /*
    Per tenere traccia del segno dell'intero. Inizialmente, viene impostata su 1, il che indica che il numero è positivo per impostazione predefinita. 
    Se la stringa inizia con un segno negativo ('-'), sign viene moltiplicato per -1, il che indica che l'intero risultante sarà negativo. 
    Se la stringa inizia con un segno positivo ('+'), il segno positivo viene ignorato e sign rimane invariato.*/

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13)) 
    /*utilizzato per ignorare gli spazi bianchi all'inizio della stringa. 
    Gli spazi bianchi sono rappresentati dai valori ASCII da 9 a 13 e dal valore 32.*/
	str++;
	if (*str == '-')
	sign *= -1;
	if (*str == '-' || *str == '+') // per spostare il puntatore str al prossimo carattere, in modo da iniziare a convertire il numero effettivo.
	str++;
	while (*str >= '0' && *str <= '9') //per convertire i caratteri numerici in interi.
	{
		res = res * 10 + *str - '0'; 
        /*Si moltiplica res per 10 (per posizionare il nuovo cifra) e si somma il valore numerico del carattere corrente sottraendo il valore ASCII 
        di '0'. Questo converte il carattere numerico nel suo valore intero.*/
		str++;
	}
	return (res * sign);
    /*
    res conterrà il valore numerico convertito dalla stringa e sign indicherà il segno (1 per positivo o -1 per negativo). 
    La funzione restituisce res * sign, che è il valore intero finale con il segno appropriato.*/
}
}

/*
int main()
{
   int val;
   char str[20];
   
   ft_strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("Stringa = %s, Valore intero = %d\n", str, val);

   ft_strcpy(str, "w3cschool.cc");
   val = ft_atoi(str);
   printf("Stringa = %s, Valore intero = %d\n", str, val);

   return(0);
}
*/