#include "stdlib.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t			i;

    str1 = (unsigned char *) ptr1;
    str2 = (unsigned char *) ptr2;
    i = 0;
    while (i < n)
    {   
        if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, ";
    
    printf("memcmp: %d\n", memcmp(str1, str2, 10));
    printf("FT_memcmp: %d\n", ft_memcmp(str1, str2, 10));
    return 0;
}*/
