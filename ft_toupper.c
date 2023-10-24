#include "libft.h"

int ft_toupper(int c)
{
    if(c > 96 && c < 123)
    {
        c = c - 32;
        return (c);
    }
    return (c);
}
/*int main() {
    int c = 'é';
    int s = ft_toupper(c);

    printf("Retorno: %d\n\n", ft_toupper(c));
    printf("Caractere original: %c\n", c);
    printf("Caractere em maiúsculo: %c\n", s);

    return 0;
}*/
