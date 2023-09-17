#include "libft.h" 

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest < src)
    {
        ft_memcpy(dest, src, n);
    }
    else
    while (n--)
    {
        //acceder y copiar un byte a la vez
        //La conversión a (unsigned char *) se realiza para asegurarse de que se copie un solo byte en lugar de un objeto más grande que podría abarcar múltiples bytes.
        *(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
    }
}

/*
int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copia la cadena desde source a destination usando ft_memmove
    ft_memmove(destination, source, strlen(source) + 1);

    printf("Cadena copiada usando ft_memmove: %s\n", destination);

    // Reestablece las cadenas para probar la superposición
    strcpy(source, "New String");
    strcpy(destination, "Original String");

    // Superpone las cadenas y copia usando ft_memmove
    ft_memmove(destination + 4, source, strlen(source) + 1);

    printf("Cadena copiada con superposición usando ft_memmove: %s\n", destination);

    return 0;
}
*/