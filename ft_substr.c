/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:43:38 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 13:26:59 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	size_t	sub_len;
	char	*new_str;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if ((size_t)start >= len_str)
		return (ft_strdup(""));
	sub_len = len_str - (size_t)start;
	if (len < sub_len)
		sub_len = len;
	new_str = (char *)malloc(sub_len + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s + start, sub_len);
	new_str[sub_len] = '\0';
	return (new_str);
}
