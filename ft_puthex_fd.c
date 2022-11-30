/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <lcozdenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:34:44 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/30 08:49:44 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(size_t n, int fd)
{
	char	*base = "0123456789abcdef";
	size_t	size = 16;

	if (n > size - 1)
	{
		return (ft_puthex_fd(n / size, fd) + ft_puthex_fd(n % size, fd));
	}
	else
		return (ft_putchar_fd(base[n % size], fd));
}
