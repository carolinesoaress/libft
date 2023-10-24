#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    char character;
    character = c;

    while(*str != character)
    {
       if (*str == '\0')
			return (NULL);
		str++;
    }
       return ((char *)str);
}

int main() {
    const char *str = "Hello, World!";
    char c = 'V';

   printf("%s\n", ft_strchr(str, c));

    return 0;
}