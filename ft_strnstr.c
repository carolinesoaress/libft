#include "libft.h"

char *ft_strnstr(const char *src, const char *sub, size_t n) 
{
    char *str = (char *)src; 
    char *find = (char *)sub;

    if (*sub == '\0')
		return (str);
    while (*str != '\0' && n > 0) 
    {
        if (*str == *find) 
        {
            char *s = str;
            char *f = find;
            while (*f != '\0' && *s == *f) 
            {
                s++;
                f++;
            }
            if (*f == '\0')
                return str;
        }
        str++;
        n--;
    }
    return (NULL);
}
/*int main() {
    const char *haystack = "&oei";
    const char *needle = "o";
    printf("strstr: %s\n", strstr(haystack, needle));
    printf("FT_strnstr: %s\n", ft_strnstr(haystack, needle, 5));
    return 0;
}*/
