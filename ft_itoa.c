/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:55:47 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/18 21:28:11 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_power(int n)
{
	size_t	pow;

	pow = 1;
	while (n < 10)
		n /= 10;
	return (pow);
}
char	*ft_itoa(int n)
{
	size_t	size;
	char	*res;
	size_t	i;

	i = 0;
	size = ft_get_power(ABS(n));
	res = malloc(sizeof(char) * size + 1);
	if (n == -2147483648)
	{
		res = "-2147483648";
		return res;
	}
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		n *= -1;
	}
	while (n > 10)
	{
		res[size - i - 1] = n % 10 + '0';
	}
	return res;
}
