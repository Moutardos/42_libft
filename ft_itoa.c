/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:55:47 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/19 19:54:27 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_power(int n)
{
	size_t	pow;

	pow = 1;
	while (n >= 10)
	{
		n /= 10;
		pow++;
	}
	return (pow);
}

static char	*ft_imintoa(void)
{
	return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*res;
	size_t	i;
	size_t	is_minus;

	if (n == -2147483648)
		return (ft_imintoa());
	is_minus = 0;
	i = 0;
	size = ft_get_power(ABS(n));
	if (n < 0)
	{
		is_minus = 1;
		n *= -1;
	}
	res = malloc(sizeof(char) * size + 1 + is_minus);
	if (is_minus)
		res[0] = '-';
	while ((i) < size)
	{
		res[size - i++ - 1 + is_minus] = n % 10 + '0';
		n /= 10;
	}
	res[size + is_minus] = '\0';
	return (res);
}
