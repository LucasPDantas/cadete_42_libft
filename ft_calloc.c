
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	*v1;
// 	int	*v2;

// 	// malloc -> só aloca (valores indefinidos, "lixo")
// 	v1 = malloc(5 * sizeof(int));
// 	// calloc -> aloca e zera
// 	v2 = calloc(5, sizeof(int));
// 	printf("=== malloc ===\n");
// 	for (i = 0; i < 5; i++)
// 		printf("v1[%d] = %d\n", i, v1[i]); // pode imprimir valores aleatórios
// 	printf("\n=== calloc ===\n");
// 	for (i = 0; i < 5; i++)
// 		printf("v2[%d] = %d\n", i, v2[i]); // todos começam como 0
// 	// sempre liberar a memória alocada
// 	free(v1);
// 	free(v2);
// 	return (0);
// }
