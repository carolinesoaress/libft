#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;  // Declaração de uma variável inteira sem sinal chamada 'number'.

	number = n;  // Inicializa a variável 'number' com o valor de 'n'.

	if (n < 0)  // Verifica se o número 'n' é negativo.
	{
		ft_putchar_fd('-', fd);  // Se for negativo, escreve um caractere '-' no descritor de arquivo 'fd'.
		number = n * -1;  // Define 'number' como o valor absoluto (positivo) de 'n'.
	}

	if (number > 9)  // Verifica se 'number' é maior que 9 (ou seja, se tem mais de um dígito).
		ft_putnbr_fd(number / 10, fd);  // Se tiver mais de um dígito, chama recursivamente a função 'ft_putnbr_fd' com o quociente da divisão de 'number' por 10.

	ft_putchar_fd(number % 10 + '0', fd);  // Escreve o último dígito de 'number' (obtido usando o operador '%' para obter o resto da divisão por 10) no descritor de arquivo 'fd'. 'number % 10' dá um valor entre 0 e 9, e 'number % 10 + '0'' converte esse valor em um caractere correspondente em formato de caractere (por exemplo, '5' em vez de 5).
}
