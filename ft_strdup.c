/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:44:28 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/15 14:50:07 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	size;
	size_t i;

	size = ft_strlen(s);
	s_dup = malloc(size + 1);
	i = 0;
	while (i < size)
	{
		s_dup[i] = s[i];
		i++;
	}
	return (s_dup);
}
