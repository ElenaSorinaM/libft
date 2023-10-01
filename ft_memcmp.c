int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n) 					//mientras i < que el tamaño de mi buffer
	{
		if (*str1 != *str2)			// si primer str es diferente del degundo str
		{
			return ((int)(*str1 - *str2)); // devuelve la diferencia entre los dos strings
		}
		str1++;  				//iterammos para poder segir comprobando
		str2++;
		i++;
	}
	return (0);  					//devuelve cero si las dos cadenas son idénticas 
							//(en caso de no cumplir la condicion del while))
}

/*
int main( void )
{
   char first[]  = "12345678901234567890";
   char second[] = "12345678901234567891";
   int result;
   printf( "Compare '%.19s' to '%.19s':\n", first, second );
   result = ft_memcmp( first, second, 19 );
   if( result < 0 )
      printf( "First is less than second.\n" );
   else if( result == 0 )
      printf( "First is equal to second.\n" );
   else
      printf( "First is greater than second.\n" );
}
*/