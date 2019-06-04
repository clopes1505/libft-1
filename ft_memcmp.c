/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:17:51 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/28 07:28:18 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *ls, const void *rs, size_t n)
{
	const unsigned char *left;
	const unsigned char *right;
	size_t i;

	i = 0;
	left = (const unsigned char *)ls;
	right = (const unsigned char *)rs;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (left[i] != right[i])
			return (left[i] - right[i]);
		i++;
	}
	return (0);	
}

int	main(void)
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "assssssssssssssss", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = memcmp(str1, str2, 5);
		
		printf("%i\t", ret);
		if (ret > 0)
			printf("str2 is less than str1\n\n");
		else if (ret < 0)
			printf("str2 is bigger than str1\n\n");
		else
			printf("str1 is equal to str2\n\n");

	char s1[15];
	char s2[15];
	int rt;

	memcpy(s1, "asssssssssssssssss", 6);
	memcpy(s2, "ABCDEF", 6);

	rt = ft_memcmp(s1, s2, 5);

		printf("%i\t", rt);
		if (rt > 0)
			printf("s2 is less than s1\n\n");
		else if (rt < 0)
			printf("s1 is less than s1\n\n");
		else
			printf("s1 is equal to s2\n\n");
}
