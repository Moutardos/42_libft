/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:37:41 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/18 21:14:31 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	data;
	unsigned char	*mem_s;

	i = 0;
	data = (unsigned char) c;
	mem_s = (unsigned char *) s;
	while (mem_s[i] != data && n)
	{
		n--;
		i++;
	}
	if (n)
		return ((void *) s + i);
	return (NULL);
}
