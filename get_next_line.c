#include "get_next_line.h"

char    *get_next_line(int fd)
{
    int read_ret;
    char *buffer;
    static char storj[BUFFER_SIZE + 1];

    if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
    if (!(buffer = malloc(sizeof(char) * BUFFER_SIZE +1)))
        return (0);

    // storj_packer(check if storj is filled and if it is then put it on beginning of buff);

    while(read_ret = read(fd, buffer, BUFFER_SIZE) > 0)
    {
        if(is_next_line(buffer))
        {
            ft_strcpy(buffer, storj);
            buffer = buff_trim(buffer);
            storj_trim(storj);
            break;
        }
        ft_strcpy(buffer, storj);
    }
    // if (read_ret == 0)
    //         END OF FILE


    return (buffer);
}