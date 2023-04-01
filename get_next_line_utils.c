#include "get_next_line.h"

int     is_next_line(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *buff_trim(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n')
    {
        if (!str[i])
            return (str);  // return str if no '\n' found
        i++;
    }
    while (str[i])
    {
        str[i] = 0;
        i++;
    }
    return (str);
}

void storj_trim(char *str)
{
    while (*str != '\n' && *str != '\0')
        str++;
    if (*str == '\n')
        str++;
}