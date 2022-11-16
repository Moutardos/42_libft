/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:33:40 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/11/16 18:53:00 by lcozdenm         ###   ########.fr       */
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
	if(memcmp(dest_1, dest_2, SOURCE_SIZE))
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


	/* ft_memmove */
	printf(" ft_memmove");
	/* " Salut9" -> " Saalt9" */
	ft_memmove(dest_1 + 3, dest_1 + 2, 2);
	if (memcmp(dest_1, " Saalt9", 2))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", "saalt9", (char *) dest_1);
		return (0);
	}
	printf(" good\n");


	/* ft_memcmp */
/*	printf( "ft_memcmp");
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
*/
	/* ft_atoi */
	printf(" ft_atoi");
	if (ft_atoi("  -2147483648") != atoi("   -2147483648"))
	{
		fprintf(stderr, " FAILED\n expected %d, got %d\n", atoi("   -2147483648"), ft_atoi("   -2147483648"));
		return (0);
	}
	printf(" good\n");

	/* ft_strnstr */
	char * big = "Bonjour on test ici";
	char * res;

	res = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	printf("%s\n", res);
	/* ft_calloc */
	printf(" ft_calloc");
	int		*arrint_1;
	int		*arrint_2;
	arrint_1 = ft_calloc(SOURCE_SIZE, sizeof(int));
	arrint_2 = calloc(SOURCE_SIZE, sizeof(int));
	if (memcmp(arrint_1, arrint_2, SOURCE_SIZE * sizeof(int)))
	{
		fprintf(stderr, " FAILED\n");
		return (0);
	}
	printf(" good\n");

	/* ft_strdup */
	printf(" ft_strdup");
	char	*str_dup;
	str_dup = ft_strdup(source);
	if (str_dup == source || strcmp(str_dup, source))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", source, str_dup);
		return (0);	
	}
	printf(" good\n");
	
	/* display */
	ft_putchar_fd('v', STDOUT);
	ft_putstr_fd(" allo! voici putnbr pour 123, -12 et - 2147483648\n", STDOUT);
	ft_putnbr_fd(123, STDOUT);
	ft_putchar_fd('\n', STDOUT);
	ft_putnbr_fd(-12, STDOUT);
	ft_putchar_fd('\n', STDOUT);
	ft_putnbr_fd(-2147483648, STDOUT);
	ft_putchar_fd('\n', STDOUT);
	
	/* ft_strsub */
	char	*str_sub;
	str_sub = ft_substr(source, 2, 3);
	if (strcmp(str_sub, "alu"))
	{
		fprintf(stderr, " FAILED\n expected %s, got %s\n", "alu" , str_sub);
		return (0);		
	}
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
