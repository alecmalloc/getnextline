#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

// delete when push !
#include <stdio.h>

// delete when PUSH !
#define BUFFER_SIZE 100

char    *get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t ft_strladd(char *dest, const char *src, size_t destsize);
void    *ft_calloc(size_t count);
void    ft_bzero(void *s, int n);
void    ft_strcat(char *dest, const char *src);
char    *beforenewline(char *storj, char *line);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif