#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

// delete when PUSH !
#define BUFFER_SIZE 10

char    *get_next_line(int fd);
int     is_next_line(char *str);
char	*ft_strcpy(char *dest, char *src);
char    *buff_trim(char *str);
void    storj_trim(char *str);

#endif