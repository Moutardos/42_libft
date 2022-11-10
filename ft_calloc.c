/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:08:17 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/10 18:41:41 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (nmemb * size > SIZE_MAX)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return mem;
}
