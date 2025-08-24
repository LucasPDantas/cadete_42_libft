/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:15:49 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 12:54:00 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len_copy;
	char	*new_str;

	if (!s1)
		return (NULL);
	if (!set || *set == '\0')
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len_copy = end - start + 1;
	new_str = (char *)malloc(len_copy + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1 + start, len_copy);
	new_str[len_copy] = '\0';
	return (new_str);
}
