/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:03:57 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/16 19:34:09 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (big == NULL || little == NULL || little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (little[j] == '\0')
		{
			return ((((char *) big + i - j +1)));
		}
		i++;
	}
	return (NULL);
}
