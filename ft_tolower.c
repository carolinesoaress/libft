#include "libft.h"

int ft_tolower(int c)
{
    if(c > 64 && c < 91)
    {
        c = c + 32;
        return (c);
    }
    return (c);
}
/*int main() {
    int c = 'L';
    int s = ft_tolower(c);

    printf("Retorno: %d\n\n", ft_tolower(c));
    printf("Caractere original: %c\n", c);
    printf("Caractere em maiúsculo: %c\n", s);

    return 0;
}*/
