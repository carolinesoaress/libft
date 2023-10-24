#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t n;

    n = 0;

    while (str[n] != '\0')
    {
        n++;
    }
    return (n);
}
/*int main() {
    char minhaString[] = " ";
    //size_t tamanho = strlen(minhaString);

    //printf("O tamanho da string é: %zu\n", tamanho);

    printf("Tamanho da string: %zu\n", ft_strlen(minhaString));
    return 0;
}*/
