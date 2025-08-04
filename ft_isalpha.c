/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 08:27:54 by luvences          #+#    #+#             */
/*   Updated: 2025/07/24 12:02:05 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test;

// 	test = 'R';
// 	// ft_isapha(test);
// 	// printf("%c é um caracter", ft_isapha);
// 	if (ft_isapha(test))
// 	{
// 		printf("é uma letra\n");
// 	}
// 	else
// 		printf("não é letra\n");
// }
