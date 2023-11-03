#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
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
    write(fd, "\n", 1);
}
/*int main()
{
    char *c = "carol";
    int fd = 1;

    ft_putendl_fd(c, fd);  // Chamada da função para escrever 'a' no descritor de arquivo 1 (stdout)
    return 0;
}*/