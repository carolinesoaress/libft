#include "libft.h"

char *ft_strdup(const char *str)
{
    char *cpy;
    size_t i = 0;

    size_t len = ft_strlen(str) + 1;

    cpy = (char *)malloc(len);

    if(!cpy)
        return (NULL);

    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}
/*int main() {
    const char *original = "Hello, world!";
    char *copy = ft_strdup(original);
    
    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Cópia: %s\n", copy);
        
        // Lembre-se de liberar a memória alocada dinamicamente quando não for mais necessária
        free(copy);
    } else {
        printf("Falha na alocação de memória.\n");
    }
    
    return 0;
}
*/