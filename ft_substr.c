#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *str;
    size_t len_s;

    // Verifica se a string de origem é nula, caso seja, retorna NULL
    if (!s)
        return (NULL);

    // Calcula o comprimento da string de origem
    len_s = ft_strlen(s);

    // Se o índice de início for maior ou igual ao comprimento da string, retorna uma string vazia
    if (start >= len_s)
        return (ft_strdup(""));

    // Se o comprimento restante da string for menor que 'len', ajusta 'len' para o valor máximo possível
    if (len_s - start < len)          //Essa verificação é realizada para garantir que a função não tente criar uma substring que 
        len = len_s - start;          //seja mais longa do que o comprimento restante da string de origem. Se len for maior do 
//Sempre ajusto para que len tenha    //que a quantidade de caracteres que resta na string de origem a partir do índice start,
//O tamanho máximo que da para        //isso resultaria em um acesso além dos limites da string original, o que pode levar a 
//colocar na nova string             //comportamentos indefinidos ou erros de segmentação.
                                    
    // Aloca memória para a nova substring
    str = malloc(sizeof(char) * len + 1);

    // Verifica se a alocação de memória foi bem-sucedida
    if (!str)
        return (NULL);

    i = 0;
    while (s[i] && (i < len))
    {
        str[i] = s[start + i]; // Copia os caracteres da substring
        i++;
    }
    str[i] = '\0'; // Adiciona o caractere nulo ao final da substring

    return (str); // Retorna a substring alocada dinamicamente
}
/*int main()
{
    char const *str = "Caroline Soares";
    unsigned int start = 9;
    size_t len = 8;
    char * nova;

    nova = ft_substr(str, start, len);
    printf("Nova string: %s\n", nova);

    return 0;
}*/
