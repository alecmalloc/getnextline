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
    if ((ft_strlen(storj)) > 0)
    {
        printf("prestorj: .%s. \n", storj);
        line = ft_strjoin(line, storj);
    }
    while ((read_ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if(is_next_line(buffer))
        {
            line = checkandsplit(buffer, line);
            printf("storjrn: .%s. postlinebuff: .%s. strlenbuff: .%zu. \n", storj, postline(buffer), ft_strlen(buffer));
            ft_strlcpy(storj, postline(buffer), ft_strlen(buffer));
            printf("storjrn: .%s. postlinebuff: .%s. strlenbuff: .%zu. \n", storj, postline(buffer), ft_strlen(buffer));
            break;
        }
        line = ft_strjoin(line, buffer);
    }
    printf("poststorj: .%s. \n", storj);
    free(buffer);
    return (line);
}