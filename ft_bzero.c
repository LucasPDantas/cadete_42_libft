/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:39:23 by luvences          #+#    #+#             */
/*   Updated: 2025/08/04 14:18:54 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

#include <stdio.h>

// int	main(void)
// {
// 	char	test[] = "hojes";

// 	ft_bzero(test, 2);
// 	for (int i = 0; i < 6; i++)
//     printf("[%c]\n", test[i]);

// 	return (0);
// }
