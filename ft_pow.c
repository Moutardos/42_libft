/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <lcozdenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:06:51 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/12/03 15:58:59 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long    ft_pow(int n, int pow)
{
    long int ans;

    ans = 1;
    while (pow > 0)
    {
        ans *= n;
        pow--;
    }
    return (ans);
}