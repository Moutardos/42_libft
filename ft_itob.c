/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <lcozdenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:49:29 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/25 17:45:35 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itob(int n, char *base)
{
	int	is_neg;
	int	result;

	result = 0;
	is_neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			is_neg = -1;
	while (*str != '\0')
	{
		if (!ft_cinstr(*str, base))
			return (result);
		result *= base_size;
		result += ft_cinstr(*str++, base) * is_neg;
	}
	return (result);
}
