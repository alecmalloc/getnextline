#include "get_next_line.h"

char    *get_next_line(int fd)
{
    int read_ret;
    char *buffer;
    char *line;
    static char storj[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (0);
    if (!(buffer = ft_calloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);
    if (!(line = ft_calloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);
    while ((read_ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        ft_strcat(storj, buffer);
        ft_bzero(buffer, BUFFER_SIZE + 1);
    }
    line = beforenewline(storj, line);
    return (line);
}