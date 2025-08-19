/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:49:12 by luvences          #+#    #+#             */
/*   Updated: 2025/08/19 16:06:03 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test;

// 	test = '@';
// 	if (ft_isalnum(test))
// 	{
// 		printf("alfanumérico\n");
// 	}
// 	else
// 		printf("NÃO alfanumérico\n");
// }
