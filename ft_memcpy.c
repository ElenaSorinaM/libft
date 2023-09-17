#include "libft.h" 

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
	unsigned const char *s;

    i = 0;
    d = dest;
    s = src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

/*
int main(void)
{
	char src[50] = "Hola Mundo";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 4);
	printf("%s", ret);
	return (0);
}
*/