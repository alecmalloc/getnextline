#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);

int main() {
    int fd;
    char *line;
    int i = 7;

    fd = open("textfile.txt", O_RDONLY);

    while(i--)
    {
        get_next_line(fd);
    }

    close(fd);
    return (0);
}