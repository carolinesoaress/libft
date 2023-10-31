#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    memmove(str + 7, str, 5); // Copia "World" para a posição "Hello" sem corromper os dados.
    printf("%s\n", str); // Imprime "Hello, World!"

    return 0;
}
