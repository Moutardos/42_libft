/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:35:07 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/10/21 17:35:11 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

/*return the length of the NUL character terminated string s*/
size_t	ft_strlen(const char *s);

/*copy memory of size n from src to dest*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*move memory of length len from src to dst, can overlap*/
void	*ft_memmove(void *dst, const void *src, size_t len);
/* set the nth byte of b to c */
void	*ft_memset(void *b, int c, size_t len);

/* set the nth byte of s to 0 */
void	ft_bzero(void *s, size_t n);

/* return 0 if they have the same data, positive number if the
   first different byte is bigger or else a negative number */
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/* return the first occurence of the c in the nth bytes of s*/
void	*ft_memchr(const void *s, int c, size_t n);

#endif
