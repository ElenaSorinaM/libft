void	*ft_memchr(const void *s, int c, size_t n). //Se recibe una cadena, un carácter para encontrar y el tamaño del buffer
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n) 				//mientas i menor	que el tamaño del buffer. 
	{
		if (str[i] == to_find) 		//si recorriendo str[i] encuentro la coincidencia que busco
			return (&str[i]); 	//devuelvo la dirrecion de la posicion de la coincidencia 
		i++; 				//contador para poder recorrer el str hasta que se encuentre la coincidencia que busco
	}
	return (NULL); 				//si no hay una coincidencia devuelve NULL
}

#include <stdio.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
