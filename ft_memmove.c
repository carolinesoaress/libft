#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *dest = "Carol";
    memmove(str, dest, 3); // Copia "Carol" para a posição "Hello" sem corromper os dados.
    printf("%s\n", str); // Imprime "Carol, World!"

    return 0;
}
