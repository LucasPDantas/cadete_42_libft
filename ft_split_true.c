/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:44:05 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 18:48:32 by luvences         ###   ########.fr       */
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

static void	split_aux(char const *string, char delimiter, char **list_address)
{
	int	i;

	i = 0;
	while (*string != '\0')
	{
		while (*string == delimiter)
		{
			string++;
		}
		while (string[i] != delimiter)
		{
			i++;
		}
		*list_address = ft_substr(string, 0, i);
        list_address++;
		string += i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**list_address;
	int		words;

	words = count_words(s, c);
	list_address = ft_calloc(words + 1, sizeof(char *));
    split_aux(s, c, list_address);
    return (list_address);
}
