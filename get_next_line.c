#include "get_next_line.h"

char    *get_next_line(int fd)
{
    int i;
    char c;
    char *buffer;
    static char storj[BUFFER_SIZE + 1];

    if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

    buffer = malloc(sizeof(char) * BUFFER_SIZE +1);
    if (!buffer)
        return 0;

    storj_packer(check if storj is filled and if it is then put it on beginning of buff)

    i = 0;
    while(read(fd, buffer, BUFFER_SIZE) > 0)
    {
        check buff for newline -> if none found skip the rest
            copy buff to storj
            remove all of buff after nl
            remove all of storj before nl
    }

    return (buffer);
}