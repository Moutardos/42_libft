/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:01:30 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/19 23:59:34 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* return 1 if c is in str */
static	int	ft_char_in_str(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/* return the size of the new string in strtrim and set start and end to the beginning and the end of 
 * the trimmed part */
static size_t	ft_strtrim_wc(char const *s1, char const *set, size_t *start, size_t *end)
{
	size_t 		i;

	i = 0;
	while (*s1 && ft_char_in_str(*s1, set))
	{
		s1++;
		i++;
	}
	*start = i;
	while (*s1 && *(s1 + 1))
	{
		i++;
		s1++;
	}
	while (*s1 && ft_char_in_str(*s1, set))
	{
		s1--;
		i--;
	}
	*end = i + 1;
	return (*end - *start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	size;
	size_t	start;
	size_t	end;
	size_t	i;
	
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strtrim_wc(s1, set, &start, &end);
	if (size + 1 > SIZE_MAX)
		return (NULL);
	res = malloc(size + 1);	
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (s1 + start), size + 1);
	return (res);
}
