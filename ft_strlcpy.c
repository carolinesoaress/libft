#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t n;
    n = 0; 

     /*lida com o caso em que o tamanho size fornecido como argumento é igual a zero
    Essa verificação serve para tratar um cenário em que o buffer de destino (dest)
    não tem espaço para armazenar nenhum caractere da string de origem (src),
    em mesmo o caractere nulo '\0'.*/
    if (size == 0)
		return (ft_strlen(src));

    while (n < size - 1 && src[n] != '\0')
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';

    return (ft_strlen(src));
}
/*int main()
{
    const char *src = "Carolzinha";
    char dest[5];
    size_t result = ft_strlcpy(dest, src, 5);

    printf("%zu\n", result);
    printf("\nOrigem: %s\n", src);
    printf("Destino: %s\n", dest);

    return 0;

}*/