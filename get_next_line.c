#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static int read_ret;
    char *buffer;
    char *line;
    static char storj[BUFFER_SIZE + 1];

  //  printf("------------- \n");

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (0);
    if (!(buffer = ft_calloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);
    if (!(line = ft_calloc(sizeof(char) * (BUFFER_SIZE + 1))))
        return (0);
    if (ft_strlen(storj) > 0)
        line = storjbeforenl(storj, line);
    printf("storj: %s", storj);
    while ((read_ret = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if (isnewline(buffer))
        {
            line = beforenewline(line, buffer, storj);
            free(buffer);
            return (line);
        }
     //   printf("buff:%s", buffer);
        printf("r:%d", read_ret);
        line = ft_strjoin(line, buffer, line);
    }
    printf("storj: .%s. \n", storj);
    free(buffer);
    if (read_ret < BUFFER_SIZE && ft_strlen(line) > BUFFER_SIZE && read_ret != 0)
        return (ft_trim(line, BUFFER_SIZE - read_ret));
    return (0);

}