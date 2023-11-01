#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n) 
 //Loop de Cópia: Dependendo do caso de sobreposição ou não, a função entra em um dos dois loops
{
	unsigned int	i;

	if (!(dest || src)) //Se qualquer um deles for nulo, a função retorna NULL, indicando um erro.
		return (NULL);
	if (dest < src) //Verificação de Sobreposição: a função compara os ponteiros de destino e origem para determinar se há uma sobreposição
	{               //Se dest for menor que src, isso sugere que não há sobreposição e a função pode copiar os dados diretamente de src para dest
		i = 0;
		while (i < n)   
		{   //No caso de não haver sobreposição, ela copia os dados de src para dest em ordem crescente (da esquerda para a direita)
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else    //Caso contrário, se dest for maior ou igual a src, isso sugere uma sobreposição,
	{       // e a função copiará os dados de trás para frente para evitar a corrupção.
		i = n;
		while (i > 0)
		{   //No caso de haver sobreposição, ela copia os dados de src para dest em ordem decrescente (da direita para a esquerda).
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest); //Retorno de dest: Após a cópia dos dados, a função retorna o ponteiro dest.
}
       
int main() {
    char str[] = "Hello, World!";
    char *dest = "Carol";
    memmove(str, dest, 5 ); // Copia "Carol" para a posição "Hello" sem corromper os dados.
    printf("original: %s\n", str); // Imprime "Carol, World!"

    char st[] = "Hello, World!";
    char *des = "Carol";
    ft_memmove(st, des, 5);
    printf("Minha: %s\n", st);
    
    return 0;
}
