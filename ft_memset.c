#include "libft.h"

void *ft_memset(void *dest, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char *) dest;
  
    while(n > 0)
    {
        str[n - 1] = c;
        n--;
    }
    return (dest);
}

/*int main()
{
    char str [15] = "Maria gata";
    int c = '-';
    size_t n = 5;

    printf("\nletra da str[0] %c\n", str[0]);
    printf("letra da str[1] %c\n", str[1]);
    printf("letra da str[2] %c\n", str[2]);
    printf("letra da str[3] %c\n", str[3]);
    printf("letra da str[4] %c\n\n", str[4]);

    ft_memset(str, c, n);

    printf("string apos a função: %s\n", str);
    return 0;
}*/