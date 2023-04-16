#include "get_next_line.h"


char    *get_next_line(int fd)
{
    int read_ret;
    char *buffer;
    char *line;
    static char storj[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (0);
    if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);
    if (!(line = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);

    if(storj[0] != 0)
        printf("\nstor has value\n");

    while ((read_ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if(is_next_line(buffer))
        {
            line = checkandsplit(buffer, storj, line);
            break;
        }
        line = ft_strjoin(line, buffer);
    }

    // if (read_ret == 0)
    //         END OF FILE

    free(buffer);
    return (line);
}