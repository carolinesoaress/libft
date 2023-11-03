#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if (!s)
		return ;
        
    size_t  i;

    i = 0;

    while(s[i] != '\0')
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
}

