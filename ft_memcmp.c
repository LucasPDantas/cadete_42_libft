

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)str1[i] - (int)str2[i]);
}

// #include <stdio.h>
// #include <string.h> // para usar a memcmp original

// int	main(void)
// {
// 	char	a1[] = "ABC";
// 	char	a2[] = "ABC";
// 	char	b1[] = "ABE";
// 	char	b2[] = "ABC";
// 	char	c1[] = "A\0C";
// 	char	c2[] = "A\0D";

// 	printf("Caso 1: iguais (ABC vs ABC, n=3)\n");
// 	printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp(a1, a2, 3), memcmp(a1,
// 			a2, 3));
// 	printf("Caso 2: diferentes no último byte (ABC vs ABD, n=3)\n");
// 	printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp(b1, b2, 3), memcmp(b1,
// 			b2, 3));
// 	printf("Caso 3: n menor que a posição da diferença (ABC vs ABD, n=2)\n");
// 	printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp(b1, b2, 2), memcmp(b1,
// 			b2, 2));
// 	printf("Caso 4: diferença após um \\0 (A\\0C vs A\\0D, n=3)\n");
// 	printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp(c1, c2, 3), memcmp(c1,
// 			c2, 3));
// 	printf("Caso 5: n = 0 (não deve acessar nada)\n");
// 	printf("ft_memcmp: %d | memcmp: %d\n\n", ft_memcmp(a1, a2, 0), memcmp(a1,
// 			a2, 0));
// 	return (0);
// }

