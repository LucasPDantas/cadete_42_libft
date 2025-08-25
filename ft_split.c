/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:44:05 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 22:33:09 by luvences         ###   ########.fr       */
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

static void	free_split(char ***list_address)
{
	char	**ptr;

	ptr = *list_address;
	while (*ptr)
	{
		free(*ptr++);
	}
	free(*list_address);
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
		free_split(&list_address);
	}
	return (list_address);
}
// 0        1
// ["hello", "world"]
// #include <unistd.h>

// int	main(void)
// {
// 	char **splir = ft_split("lorem", ' ');
// 	int i = 0;
// 	while (i < 1)
// 	{
// 		char *ptr = splir[i]; //"wold"
// 		// ft_putstr_fd(splir[i], 1)
// 		while (*ptr)
// 		{
// 			write(1, ptr++, 1);
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	free_split(&splir);
// }