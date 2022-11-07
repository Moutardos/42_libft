/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:33:40 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/09/28 00:23:54 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define S_TEST_SIZE 4
#define SOURCE_SIZE 6

void	*ft_memcpy(void *dst, const void *src, size_t n);
int	test(void)
{
	int i = 0;
	const char*	(s_test)[S_TEST_SIZE];
	char*		s = "atoms\0abc";
	char*		s1 = "atoms\0\0\0\0";
	const int	nb2 = 8;
	const int	nb1 = 4;
	const char*	source = " Salut9";
	char		dest_1[SOURCE_SIZE];
	char		dest_2[SOURCE_SIZE];

	/* declaration */
	s_test[0] = "";
	s_test[1] = "123";
	s_test[2] = "test tast tist tost tust tyst";
	s_test[3] = "    `@#$}{}{PZX<>/.,";
	printf("BEGINING TEST:\n");

	/* ft_memset */
	printf(" ft_memset");
	ft_memset(dest_1, '*', SOURCE_SIZE);
	memset(dest_2, '*', SOURCE_SIZE);
	if (memcmp(dest_1, dest_2, SOURCE_SIZE))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", (char *) dest_2, (char *) dest_1);
		return (0);
	}
	printf(" good\n");

	/* ft_bzero */
	printf(" ft_bzero");
	ft_bzero(dest_1, SOURCE_SIZE);
	bzero(dest_2, SOURCE_SIZE);
	if(memcmp(dest_1, dest_1, SOURCE_SIZE))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", (char *) dest_2, (char *) dest_1);
		return (0);
	}
	printf(" good\n");
	
	/* ft_strlen */
	printf(" ft_strlen");
	while(i < S_TEST_SIZE)
	{
			if (strlen(s_test[i]) != ft_strlen(s_test[i]))
			{
				fprintf(stderr," FAILED\n expected %zu, got %zu\n", strlen(s_test[i]), ft_strlen(s_test[i]));
				return (0);	
			}
		i++;
	}
	printf(" good\n");

	/* ft_memcpy */
	printf(" ft_memcpy");
	ft_memcpy(dest_1, source, SOURCE_SIZE);
	memcpy(dest_2, source, SOURCE_SIZE);
	if (memcmp(dest_1, dest_2, SOURCE_SIZE))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", (char *) dest_2, (char *) dest_1);
		return (0);
	}
	printf(" good\n");
	
	/* ft_memcmp */
	printf( "ft_memcmp");
	i = 0;
	while( i < S_TEST_SIZE - 1)
	{
		if ((memcmp(s_test[i], s_test[i + 1], 2) ) != (ft_memcmp(s_test[i], s_test[i + 1], 2)))
		{
			fprintf(stderr, " FAILED\n%s -> %s expected %d, got%d\n",(unsigned char *) (s_test[i] + 1), (s_test[i + 1] + 1) ,memcmp(s_test[i], s_test[i + 1], 2), ft_memcmp(s_test[i], s_test[i + 1], 2));
		//	return (0);
		}
		i++;
	}

	if ((memcmp(&nb1, &nb2, 1) != (ft_memcmp(&nb1, &nb2, 1))))
	{
		fprintf(stderr, " FAILED\n expected %d, got %d\n", memcmp(&nb1, &nb2, 1), ft_memcmp(&nb1, &nb2, 1));
		return (0);
	}
	if ((memcmp(s1, s, SOURCE_SIZE) != (ft_memcmp(s1, s, SOURCE_SIZE))))
	{
		fprintf(stderr, " FAILED\n expected %d, got %d\n", memcmp(s1, s, SOURCE_SIZE), ft_memcmp(s1, s, SOURCE_SIZE));
		return (0);
	}
	
	printf(" good\n");
	return (1);
}

int	main(void)
{
	if (!test())
		fprintf(stderr, "errors detected..\n");
	else
		printf("ALL GOOD\n");
	return (0);
}
