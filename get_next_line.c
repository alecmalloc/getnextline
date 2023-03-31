#include <stdlib.h>
#include <unistd.h>
char *get_next_line(int fd)
{
    int i;
    char c;
    char    *buff = malloc(100 * sizeof(char));

    i = 0;
    while((read(fd, &c, 1)) > 0)
    {
        buff[i] = c;
        if (c == '\n')
        {
            i++;
            buff[i] = '\0';
            break;
        }
        i++;
    }
    return (buff);
}