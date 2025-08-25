/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:44:05 by luvences          #+#    #+#             */
/*   Updated: 2025/08/25 14:21:02 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *string, char delimiter)
{
	int	cw;

	cw = 0;
	while (*string != '\0')
	{
		if (*string != delimiter && (*(string + 1) == delimiter || *(string
					+ 1) == '\0'))
		{
			cw++;
		}
		string++;
	}
	return (cw);
}

static int	split_aux(char const *string, char delimiter, char **list_address,
		int words)
{
	int	i;

	i = 0;
	while (words > 0)
	{
		while (*string == delimiter && *string != '\0')
		{
			string++;
		}
		while (string[i] != delimiter && string[i] != '\0')
		{
			i++;
		}
		*list_address = ft_substr(string, 0, i);
		if (!*list_address)
		{
			return (1);
		}
		words--;
		list_address++;
		string += i;
		i = 0;
	}
	return (0);
}

static void	free_split(char **list_address)
{
	int	i;

	i = 0;
	while (list_address[i])
	{
		free(list_address[i++]);
	}
	free(list_address);
}

char	**ft_split(char const *s, char c)
{
	char	**list_address;
	int		words;

	words = count_words(s, c);
	list_address = ft_calloc(words + 1, sizeof(char *));
	if (!list_address)
	{
		return (NULL);
	}
	if (split_aux(s, c, list_address, words))
	{
		free_split(list_address);
	}
	return (list_address);
}
