#include "get_next_line.h"

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


void ft_strcat(char *dest, const char *src)
{
    size_t dest_len = ft_strlen(dest);
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

char *beforenewline(char *line, char *buffer, char *storj)
{
	int i;
	int bufflen;

	i = 0;
	bufflen = ft_strlen(buffer);
	while (buffer[i] && buffer[i] != '\n' && i < bufflen)
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = buffer[i];
	i++;
	line[i] = '\0';
	ft_memmove(storj, buffer + i, ft_strlen(buffer + i) + 1);
	return (line);
}

char	*storjbeforenl(char *storj, char *line)
{
	int i;
	int storjlen;

	i = 0;
	storjlen = ft_strlen(storj);
	while (storj[i] && storj[i] != '\n' && i < storjlen)
	{
		line[i] = storj[i];
		i++;
	}
	line[i] = storj[i];
	i++;
	line[i] = '\0';
	ft_memmove(storj, storj + i, ft_strlen(storj + 1));
	return (line);
}

int	isnewline(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		if (string[i] == '\n')
			return (1);
		i++;
	}
	return (0);
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
