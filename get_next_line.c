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

    printf("prestorj .%s.\n", storj);

    if ((ft_strlen(storj)) > 0)
        line = ft_strjoin(line, storj);

    printf("line? .%s.\n", line);
    printf("STORJLEN .%zu.\n", ft_strlen(storj));

    while ((read_ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if(is_next_line(buffer))
        {
            line = checkandsplit(buffer, storj, line);
            ft_strlcpy(storj, postline(buffer), ft_strlen(buffer));
            break;
        }
        line = ft_strjoin(line, buffer);
    }

    if (read_ret == 0)
        return (0);

    printf("storjt2: .%s. \n", storj);

    free(buffer);
    return (line);
}