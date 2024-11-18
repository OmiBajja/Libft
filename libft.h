#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

void * ft_calloc(size_t elementCount, size_t elementSize);
int ft_isascii(char * str);
char * ft_itoa(int n);
void * ft_memset(void *str, int a, size_t n);     
void ft_putnbr_fd(int n, int fd);  
char * ft_strchr(const char *str, int tofind);    
char * ft_strjoin(char const* s1, char const* s2); 
int ft_strlen(const char * str);   
char * ft_strnstr(char *str, char *tofind, int n); 
char * ft_substr(char const * s, unsigned int start, size_t len);
int ft_atoi(char * str);
int ft_isalnum(char * str);
int ft_isdigit(char * str);  
void * ft_memcpy(void *dest, const void *src, size_t size);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
char * ft_strdup(const char *src);   
size_t ft_strlcat(char *dst, char *src, size_t size);
char * ft_strmapi(char const *s, char (*f)(unsigned int, char)); 
char * ft_strrchr(const char *str, int tofind);
char ft_tolower(char c);
void * ft_bzero(void *str, size_t n);
int ft_isalpha(char * str);  
int ft_isprint(char * str);  
void * ft_memmove(void *dest, const void *src, size_t size); 
void ft_putendl_fd(char *s, int fd);
char ** ft_split(char const *s, char c);      
void ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t ft_strlcpy(char *dst, char *src, size_t size);
int ft_strncmp(char *str1, char *str2, int n);
char * ft_strtrim(char const *s1, char const * s2); 
char ft_toupper(char c);
#endif