
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_little;

	i = 0;
	size_little = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (i + size_little > len)
			return (NULL);
		if (ft_strncmp(big + i, little, size_little) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
