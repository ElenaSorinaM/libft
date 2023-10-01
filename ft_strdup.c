char	*ft_strdup(const char *s1) 
{
    char	*ptr;
	int		size;

	size = ft_strlen(s1);  //almaceno la longitud de s1 en la variable size
	ptr = malloc(sizeof(char) * (size + 1)); //ptr = se reserva memoria con malloc de la longitud guardada  + 1 
	if (ptr == NULL) //si la reserva falla
		return (NULL); //retorno null
	ft_memcpy(ptr, s1, size); //copiado mi string a un area de memoria nueva apuntada por ptr, hasta size
	ptr[size] = '\0'; // se cierra el final del string con un caracter vacio.
	return (ptr); //devuelve un puntero a una nueva cadena que es un duplicado de la cadena s1
}

/*
int main() {
    const char *original = "Hello, World!";
    
    // Duplica la stringa
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Stringa originale: %s\n", original);
        printf("Stringa duplicata: %s\n", duplicate);

        // Ora puoi lavorare con la stringa duplicata

        // Ricorda di deallocare la memoria quando hai finito
        free(duplicate);
    } else {
        printf("Errore nell'allocazione di memoria per la duplicazione.\n");
    }

    return 0;
}
*/