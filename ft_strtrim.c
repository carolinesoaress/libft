#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    if (s1 == NULL || set == NULL) {
        return NULL;
    }

    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL) {
        start++;
    }

    if (start == end) {
        // A string consiste apenas de caracteres a serem removidos.
        // Nesse caso, retorne uma string vazia.
        return ft_strdup("");
    }

    while (end > start && strchr(set, s1[end - 1]) != NULL) {
        end--;
    }

    size_t trimmed_length = end - start;
    char *trimmed_str = (char *)malloc(trimmed_length + 1);

    if (trimmed_str == NULL) {
        return NULL; // Falha na alocação de memória.
    }

    ft_strncpy(trimmed_str, s1 + start, trimmed_length);
    trimmed_str[trimmed_length] = '\0';

    return trimmed_str;
}