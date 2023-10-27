#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    unsigned char *str;

    str = (unsigned char *) s;
    
    while(len > 0)
    {
        str[len-1] = '\0';
        len--;
    }
    
}
/*int main()
{
    char str [10] = "Maria*gata";
    size_t n = 5;

    printf("posições antes da função: \n");
    int b = 0;

    while (b <= 10)
    {
    printf("str[%d] %c\n",b, str[b]); 
    b++;  
    }

    bzero(str, n);

    printf("string apos a função: %s\n", str);
    int i = 0;

    while (i <= 10)
    {
    printf("str[%d] %c\n",i, str[i]); 
    i++;  
    }
    return 0;
}
*/