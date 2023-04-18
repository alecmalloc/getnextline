#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);

int main() {
    int fd;
    char *line;

    fd = open("textfile.txt", O_RDONLY);

    while(1)
    {
        if ((line = get_next_line(fd)) == 0)
            break;
        printf("OUTPUT: %s \n", line);
        printf("------------------------ \n");
        free(line);
    }

    close(fd);
    return (0);
}