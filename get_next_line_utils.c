#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if(!(concat_str = ft_calloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1))))
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

size_t ft_strladd(char *dest, const char *src, size_t destsize)
{
    size_t destlen;
    size_t srclen;
    size_t i = destlen;
    size_t j = 0;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);

    if (destsize == 0)
        return srclen;

    while (j <= (destsize - destlen - 1) && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return srclen;
}


void ft_strcat(char *dest, const char *src)
{
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}


void	*ft_calloc(size_t count)
{
	void	*arr;

	arr = malloc(count);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, count);
	return (arr);
}

void	ft_bzero(void *s, int n)
{
	unsigned char	*tmps;

	tmps = s;
	while (n > 0)
	{
		*tmps = 0;
		tmps++;
		n--;
	}
}
