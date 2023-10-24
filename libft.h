#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t n);
void *ft_memcpy(void *dest, const void *org, size_t n);
void bzero(void *s, size_t len);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);

#endif
