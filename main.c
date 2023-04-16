#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);

int main() {
    int fd;
    char *line;

    fd = open("textfile.txt", O_RDONLY);

    line = get_next_line(fd);
    printf("%s \n", line);
    free(line);

    line = get_next_line(fd);
    printf("%s \n", line);
    free(line);

    close(fd);
    return (0);
}