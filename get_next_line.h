#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

// delete when push !
#include <stdio.h>

// delete when PUSH !
#define BUFFER_SIZE 8

char    *get_next_line(int fd);
int     is_next_line(char *str);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char    *preline(char *buffer);
char    *postline(char *buffer);
char    *checkandsplit(char *buffer, char *storj, char *line);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

#endif