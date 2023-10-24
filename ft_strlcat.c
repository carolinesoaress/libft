#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t n;
    size_t i;

    i = 0;
    n = ft_strlen(dest);

     if (size == 0)
		return (ft_strlen(src)+ n);
    while (i < size - 1 && src[n] != '\0')
    {
        dest[n + i] = src[i];
        i++;
    }
    dest[n + i] = '\0';

    return (ft_strlen(src)+ n); 
}
/*int main()
{
    const char src[20] = "Carol";
    char dest[50] = "Oi ";
    size_t size = 2;

    printf("tamanho: %ld\n", ft_strlcat(dest, src, size));
    printf("\nDestino: %s\n", dest);
    printf("Origem: %s\n", src);
    return 0;
}*/