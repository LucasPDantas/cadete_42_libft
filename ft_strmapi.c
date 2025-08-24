/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:27:05 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 11:43:22 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len_str;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	len_str = ft_strlen(s);
	new_str = (char *)malloc(len_str + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		new_str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new_str[len_str] = '\0';
	return (new_str);
}
