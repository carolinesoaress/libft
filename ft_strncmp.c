#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "banana";
    char str2[] = "banata";

    int result = strncmp(str1, str2, 3);

    if (result == 0) {
        printf("As strings são iguais nos primeiros 3 caracteres.\n");
    } else if (result < 0) {
        printf("str1 é menor que str2 nos primeiros 3 caracteres.\n");
    } else {
        printf("str1 é maior que str2 nos primeiros 3 caracteres.\n");
    }

    return 0;
}
