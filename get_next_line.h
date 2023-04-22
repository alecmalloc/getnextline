#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

// delete when push !
#include <stdio.h>

// delete when PUSH !
# define BUFFER_SIZE 7

char    *get_next_line(int fd);
size_t	ft_strlen(const char *s);
void    *ft_calloc(size_t count);
void    ft_bzero(void *s, int n);
void    ft_strcat(char *dest, const char *src);
char    *beforenewline(char *line, char *buffer, char *storj);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int     isnewline(char *string);
char	*storjbeforenl(char *storj, char *line);
char	*ft_strjoin(char const *s1, char const *s2);

#endif