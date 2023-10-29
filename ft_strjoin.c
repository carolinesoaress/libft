#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
     if (s1 == NULL || s2 == NULL) 
        return (NULL); // Verificação para strings nulas
    size_t n;
    size_t i;
    size_t result;

    result = ft_strlen(s1) + ft_strlen(s2);
    n = 0;
    i = 0;
   char *str3 = (char *)malloc(result + 1); // +1 para o caractere nulo de terminação
   
   if (str3 == NULL) 
        return NULL; // Falha na alocação de memória

    while (s1[n] != '\0')
    {
        str3[n] = s1[n];
        n++;
    }
    while (s2[i] != '\0')
    {
        str3[n + i] = s2[i];
        i++;
    }
    str3[n + i] = '\0';
    return(str3);
}

int main() {
    // Teste 1: Concatenar duas strings não nulas
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    char *result1 = ft_strjoin(str1, str2);
    printf("Test 1: %s\n", result1);
    free(result1);

    // Teste 2: Tratar strings nulas
    const char *nullStr1 = NULL;
    const char *nullStr2 = "Test";
    char *result2 = ft_strjoin(nullStr1, nullStr2);
    if (result2 == NULL) {
        printf("Test 2: Resultado é nulo (tratamento de strings nulas)\n");
    }

    // Teste 3: Concatenar uma string nula com uma string não nula
    const char *nullStr3 = NULL;
    const char *str3 = "Concatenation";
    char *result3 = ft_strjoin(nullStr3, str3);
    printf("Test 3: %s\n", result3);
    free(result3);

    return 0;
}