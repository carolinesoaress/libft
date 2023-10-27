#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size)
{
    void *p;

    p = malloc(num_elements * element_size);
    
    if(!p)
    {
        return (NULL);
    }
    ft_bzero(p, num_elements * element_size);

    return (p);
}

int main()
 {
   /*/ int *array;
    int num_elements = 0;
    
    // Alocar memória para um array de 10 inteiros, todos inicializados com zero.
    array = (int *)calloc(num_elements, sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Agora você pode usar o array, que já está inicializado com zeros.
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }

    // Lembre-se de liberar a memória alocada quando você não precisar mais dela.
    free(array);*/

    int *p;
    int num = 10;

     p = (int *)ft_calloc(num, sizeof(int));

     if (p == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

      for (int i = 0; i < num; i++) {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
