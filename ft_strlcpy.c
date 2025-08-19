/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:27:50 by luvences          #+#    #+#             */
/*   Updated: 2025/08/19 16:07:56 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_len;

	i = 0;
	size_len = ft_strlen(src);
	if (size == 0)
		return (size_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "hello world42";
// 	char	dest[14];
// 	size_t	i;

// 	// memset(dest, 'A', 10);
// 	i = ft_strlcpy(dest, src, 0);
// 	printf("cópia: %s\n", dest);
// 	printf("tamanho de size_t é -> %zu\n", i);
// 	i = strlcpy(dest, src, 0);
// 	printf("cópia: %s\n", dest);
// 	printf("tamanho de size_t é -> %zu\n", i);
// }
