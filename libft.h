#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t n);
void *ft_memcpy(void *dest, const void *org, size_t n);
void ft_bzero(void *s, size_t len);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
char *ft_strnstr(const char *src, const char *sub, size_t n);
void *ft_calloc(size_t num_elements, size_t element_size);
char *ft_strdup(const char *str);

#endif
