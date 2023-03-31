#include <stdlib.h>
#include <unistd.h>

#define BUFFERSIZE 42

char *storj_to_buff(char *storj, char * buff, int i)
{
    int n;

    buff = malloc(i * sizeof(char) + 1);
    n = 0;
    while (i--)
    {
        buff[n] = storj[n];
    }

    //flush storj

}

char *get_next_line(int fd)
{
    int i;
    int nl;
    char c;
    static char storj[BUFFERSIZE + 1];
    char    *buff;

    i = 0;
    nl = 0;
    while((read(fd, &c, 1)) > 0)
    {
        storj[i] = c;
        if (c == '\n')
        {
            i++;
            storj[i] = '\0';
            break;
        }
      
    }

    return (buff);
}