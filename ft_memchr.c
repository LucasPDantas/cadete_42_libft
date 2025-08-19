
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include <stddef.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "t\0\0este";
// 	int			c;
// 	size_t		n;
// 	void		*p;

// 	c = 'e';
// 	n = 5;
// 	p = ft_memchr(s, c, n);
// 	printf("endereço inicial do array: %p\n", s);
// 	printf("endereço onde 'c' foi encontrado: %p\n", p);
// 	if (p)
// 	{
// 		printf("offset = %td\n", (const char *)p - s);
// 	}
// 	else
// 		printf("NULL\n");
// 	return (0);
// }
