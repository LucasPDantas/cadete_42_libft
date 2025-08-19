/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:55:20 by luvences          #+#    #+#             */
/*   Updated: 2025/08/19 16:08:06 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Àbc";
// 	char	str2[] = "Abc";
// 	char	str[] = "À";

// 	printf("%d\n", ft_strncmp(str1, str2, 3));
// 	printf("%d\n", strncmp(str1, str2, 3));
// 	printf("Bytes de 'À':\n");
// 	for (int i = 0; str[i] != '\0'; i++)
// 	{
// 		printf("str[%d] = %d (hex: %X)\n", i, (unsigned char)str[i],
// 			(unsigned char)str[i]);
// 	}
// 	return (0);
// }
