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

char *beforenewline(char *storj, char *line)
{
	int j;
	int storjlen;

	j = 0;
	storjlen = ft_strlen(storj);
	while ((*storj != '\n') && (*storj) && (j < storjlen))
	{
		line[j] = *storj;
		j++;
		storj++;
	}
	storj++;
	line[j] = '\0';
	ft_memmove(storj - j, storj, storjlen -  + 1);
	return (line);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dest;

	p_dest = dst;
	p_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (p_dest > p_src)
	{
		while (len-- > 0)
		{
			p_dest[len] = p_src[len];
		}
	}
	else
		ft_memcpy(p_dest, p_src, len);
	return (dst);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmpd;
	char	*tmps;

	tmpd = (char *)dest;
	tmps = (char *)src;
	while (n--)
		*(tmpd++) = *(tmps++);
	return (dest);
}
