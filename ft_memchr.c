#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char chr;

    str = (unsigned char *) s;
    chr = (unsigned char)c;

    while (n > 0) //Não analisamos n = 0 pois significa que não queremos verifica Nenhum byte
    {
        if(*str == chr)
        {
            return (void *)str;
        }
        str++;
        n--;
    }
    return (NULL);

}