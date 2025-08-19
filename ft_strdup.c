
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_origin;
	char	*copy;
	size_t	i;

	size_origin = ft_strlen(s);
	copy = (char *)malloc(size_origin + 1);
	i = 0;
	if (!copy)
		return (NULL);
	while (i < size_origin)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*dup;
// 	char	big[1001];
// 	char	strange[] = {'A', 'B', '\0', 'C', 'D', '\0'};

// 	// 1. String comum
// 	dup = ft_strdup("Hello, 42!");
// 	printf("Teste 1: %s\n", dup);
// 	free(dup);
// 	// 2. String vazia
// 	dup = ft_strdup("");
// 	printf("Teste 2 (vazia): '%s'\n", dup);
// 	free(dup);
// 	// 3. String com espaços
// 	dup = ft_strdup("   Espaços   ");
// 	printf("Teste 3: '%s'\n", dup);
// 	free(dup);
// 	// 4. String com caracteres especiais
// 	dup = ft_strdup("Linha1\nLinha2\tTab");
// 	printf("Teste 4:\n%s\n", dup);
// 	free(dup);
// 	// 5. String longa
// 	for (int i = 0; i < 1000; i++)
// 		big[i] = 'A';
// 	big[1000] = '\0';
// 	dup = ft_strdup(big);
// 	printf("Teste 5 (longa): tamanho original=%zu, tamanho cópia=%zu\n",
// 		strlen(big), strlen(dup));
// 	free(dup);
// 	// 6. String com '\0' no meio (atenção!)
// 	dup = ft_strdup(strange);
// 	printf("Teste 6: '%s' (repare que para C termina no primeiro '\\0')\n",
// 		dup);
// 	free(dup);
// 	return (0);
// }
