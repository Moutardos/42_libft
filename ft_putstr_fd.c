/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:27 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/15 17:16:55 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void ft_putstr_fd(char *s, int fd)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
