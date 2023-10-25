#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i = 0;  

    while(str1[i] == str2[i] && n > 0)
    {   
        if (str1[i] == '\0' || n == 1) {
            return 0; // Strings são iguais até o final ou até o limite de caracteres
        }
        i++;
        n--;
    }
    return (str1[i] - str2[i]);
}
/*int main() {
    char str1[] = "banani verde";
    char str2[] = "banano";

    int result = ft_strncmp(str1, str2,7);

    if (result == 0) {
        printf("ft_strncmp: As strings são iguais .\n");
    } else if (result < 0) {
        printf("ft_strncmp: str1 é menor que str2 \n");
    } else {
        printf("ft_strncmp: str1 é maior que str2 \n");
    }

    int result2 = strncmp(str1, str2,7);

    if (result == 0) {
        printf("strncmp: As strings são iguais \n");
    } else if (result < 0) {
        printf("strncmp: str1 é menor que str2 \n");
    } else {
        printf("strncmp: str1 é maior que str2 \n");
    }





    return 0;
}*/
