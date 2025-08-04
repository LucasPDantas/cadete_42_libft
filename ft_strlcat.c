/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:31:25 by luvences          #+#    #+#             */
/*   Updated: 2025/08/04 17:10:20 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	space;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || dst_len >= size)
		return (size + src_len);
    if (size > dst_len)
        space = size - dst_len - 1;
    else
    {
        space = 0;
    }
	while (src[i] != '\0' && space > 0)
	{
		dst[dst_len + i] = src[i];
		i++;
		space--;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
int main(void)
{
    char dest[50] = "world";
    const char *src = " hello";
    size_t result;

    result = ft_strlcat(dest, src, 11);

    printf("resultado: %zu\n", result);
    printf("destino final: \"%s\"\n", dest);
    return (0);
}
