#include "libft.h"

void *ft_memcpy(void *dest, const void *org, size_t n)
{
    unsigned char *str;
    unsigned char *src;

    str = (unsigned char *)dest;
    src = (unsigned char *)org;
    while (n > 0)
    {
        str[n - 1] = src[n - 1];
        n--;
    }
    return dest;
}
/*int main()
{
     char origem [15]= "oi!";
    char destino[15] = "   carol";
    size_t n = 3;

    ft_memcpy(destino, origem, n);

    printf("string destinho: %s\n", destino);
    return 0;
}*/