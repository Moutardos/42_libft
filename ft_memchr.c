/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:37:41 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/10/21 17:00:45 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	unsigned char	data;
	
	i = 0;
	data = (unsigned char) c;

	while (ft_memcmp(s + i, ((void *) &data), 1) && n)
	{
		n--;
		i++;
	}
	if (n)
		return ((void *) s + i);
	return (NULL);
}
