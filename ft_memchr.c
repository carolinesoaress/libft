#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char	chr;

    str = (unsigned char *) s;
    chr = (unsigned char)c;

    while (n > 0)
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
int main() {
    char str[] = "atoa, óla";
    printf("memchr: %p\n", memchr(str, 'a', 1));
    printf("ft_memchr:%p\n", ft_memchr(str, 'a', 1));
    
    /*if (result != NULL) {
        printf("Encontrado: %c\n", *result);
    } else {
        printf("Não encontrado.\n");
    }*/
    
    return 0;
}