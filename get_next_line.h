#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

// delete when PUSH !
#define BUFFER_SIZE 4

char    *get_next_line(int fd);

#endif