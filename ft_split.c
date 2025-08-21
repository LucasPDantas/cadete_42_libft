/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:35:02 by luvences          #+#    #+#             */
/*   Updated: 2025/08/20 17:57:46 by luvences         ###   ########.fr       */
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

int	fill_split(char **tab, char const *s, char const c, size_t words)
{
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	while (*s && k < words)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		tab[k] = ft_substr(s, 0, len);
		if (!tab[k++])
		{
			while (k > 0)
				free(tab[--k]);
			free(tab);
			return (0);
		}
		s += len;
	}
	tab[k] = NULL;
	return (1);
}

char	**split_zero_delim(char const *s)
{
	char	**tab;

	if (*s == '\0')
	{
		tab = (char **)malloc(sizeof(char *) * 1);
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	tab = (char **)malloc(sizeof(char *) * 2);
	if (!tab)
		return (NULL);
	tab[0] = ft_strdup(s);
	if (!tab[0])
	{
		free(tab);
		return (NULL);
	}
	tab[1] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	if (!s)
		return (NULL);
	if (c == '\0')
		return (split_zero_delim(s));
	words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!fill_split(tab, s, c, words))
		return (NULL);
	return (tab);
}
