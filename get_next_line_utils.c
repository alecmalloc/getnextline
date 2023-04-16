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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if(!(concat_str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

char    *checkandsplit(char *buffer, char *storj, char *line)
{
	char *resPreline;
	char *resPostline;

	resPreline = preline(buffer);
	resPostline = postline(buffer);
    line = ft_strjoin(line, resPreline);
    storj = ft_strjoin(storj, resPostline);
	printf("storj: .%s. \n", storj);
	free(resPreline);
	free(resPostline);
    return(line);
}

char *preline(char *buffer)
{
	int i;
	char *preline;
    if (!buffer)
        return (0);
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    if (!buffer[i])
        return (0);
    if (!(preline = malloc(sizeof(char) * (i + 1))))
        return (0);
    ft_strlcpy(preline, buffer, i + 1);
    return (preline);
}

char *postline(char *buffer)
{
	int i;
	int j;
	char *postline;
    if (!buffer)
        return (0);

    i = 0;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    if (!buffer[i])
        return (0);
    i++;
    j = i;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    if(!(postline = malloc(sizeof(char) * (i - j + 1))))
        return (0);
    ft_strlcpy(postline, buffer + j, (i - j + 1));
    postline[i - j] = '\0';
    return (postline);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}