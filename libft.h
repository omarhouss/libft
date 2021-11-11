#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void    ft_putchar_fd(char  c, int  fd);
void    ft_putstr_fd(char   *s, int   fd);
int ft_isalpha(int  c);
int ft_isdigit(int  c);
int ft_isalnum(int  c);
int ft_isascii(int  c);
int ft_isprint(int  c);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t    ft_strlen(const char *s);
int ft_toupper(int  c);
int ft_tolower(int  c);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    ft_putnbr_fd(int    n, int  fd);
void ft_putstr_fd(char *s, int fd);
char *ft_substr(char const *s, unsigned int start,size_t len);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);



#endif
