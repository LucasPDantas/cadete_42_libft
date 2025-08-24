/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:01:22 by luvences          #+#    #+#             */
/*   Updated: 2025/08/24 18:02:37 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		is_negative;
	int		len;
	char	*str;

	num = n;
	is_negative = (num < 0);
	if (is_negative)
		num = -num;
	len = count_digits(num);
	str = (char *)malloc(len + is_negative + 1);
	if (!str)
		return (NULL);
	str[len + is_negative] = '\0';
	while (len--)
	{
		str[len + is_negative] = (char)((num % 10) + '0');
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
