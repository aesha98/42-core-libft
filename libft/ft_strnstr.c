#include <stdlib.h>

static size_t ft_strlen(const char *str)
{
	size_t i;

	i = -1;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	
	size_t i;
	size_t j;

	i = 0;
	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j < len))
		{
			if (j == ft_strlen(little))
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}