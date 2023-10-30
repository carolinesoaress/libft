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
int main() {
    char *str1 = "test\200";
    char *str2 = "test\0";

    int result = ft_strncmp(str1, str2,6);
	printf("Minha: %d\n", result);
	int res = strncmp(str1, str2,6);
	printf("Original: %d\n", res);
	return 0;
}
