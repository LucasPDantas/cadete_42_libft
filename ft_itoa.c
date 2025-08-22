/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvences <luvences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:01:22 by luvences          #+#    #+#             */
/*   Updated: 2025/08/22 10:06:32 by luvences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long num)
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
	int		is_neg;
	int		len;
	char	*str;

	num = n;
	is_neg = (num < 0);
	if (is_neg)
		num = -num;
	len = count_digits(num);
	str = (char *)malloc(len + is_neg + 1);
	if (!str)
		return (NULL);
	str[len + is_neg] = '\0';
	while (len--)
	{
		str[len + is_neg] = (char)((num % 10) + '0');
		num /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
