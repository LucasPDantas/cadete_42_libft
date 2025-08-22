/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:35:02 by luvences          #+#    #+#             */
/*   Updated: 2025/08/22 17:19:02 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

int	fill_split(char **list, char const *s, char const c, size_t words)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s && i < words)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		list[i] = ft_substr(s, 0, len);
		if (!list[i++])
		{
			while (i > 0)
				free(list[--i]);
			free(list);
			return (0);
		}
		s += len;
	}
	return (1);
}

char	**split_zero_delimiter(char const *s)
{
	char	**list;

	if (*s == '\0')
	{
		list = (char **)ft_calloc(1, sizeof(char *));
		return (list);
	}
	list = (char **)ft_calloc(2, sizeof(char *));
	if (!list)
		return (NULL);
	list[0] = ft_strdup(s);
	if (!list[0])
	{
		free(list);
		return (NULL);
	}
	return (list);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**list;

	if (!s)
		return (NULL);
	if (c == '\0')
		return (split_zero_delimiter(s));
	words = count_words(s, c);
	list = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!list)
		return (NULL);
	if (!fill_split(list, s, c, words))
		return (NULL);
	return (list);
}
