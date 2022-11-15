/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:08:17 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/15 18:48:39 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size > SIZE_MAX || nmemb * size > SIZE_MAX)
		return (NULL);
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
