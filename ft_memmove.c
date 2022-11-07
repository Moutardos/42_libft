/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:33:35 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/10/21 17:44:00 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*mem_dst;
	unsigned char	*mem_src;
	size_t			i;
	
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	mem_src = (unsigned char *) src;
	mem_dst = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		mem_dst[i] = mem_src[i];
		i++;
	}
	return (dst);
}
