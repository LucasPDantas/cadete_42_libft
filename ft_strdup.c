/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:44:40 by luvences          #+#    #+#             */
/*   Updated: 2025/08/22 09:15:28 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
