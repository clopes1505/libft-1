/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:04:17 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/24 07:33:27 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *str1;
	unsigned char ch;
	size_t i;

	str1 = (unsigned char *)str;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str1[i] == ch)
		{
			return (str1 + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char str[] = "Blue";
	const char ch = '\0';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n\n", ch, ret);
	/*-------------ft-------------*/

	const char s[] = "Blue";
	const char c = '\0';
	char *r;

	r = ft_memchr(s, c, strlen(s));
	printf("String after |%c| is - |%s|\n", c, r);


	return (0);
}
