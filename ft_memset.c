/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:50:25 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/28 08:04:25 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	*ft_memset(void *buf, int ch, size_t count)
{
	char *str;

	if (count == 0)
		return (buf);
	str = buf;
	while (count--)
	{
		*str = ch;
		if (count)
			str++;
	}
	return (buf);
}

int	main(void)
{
	char s[50];

	ft_strcpy(s, "This is string.h library function");

	printf("%s\n", s);

	memset(s, '$', (0));
	printf("%s\n\n\n", s);

/*-----------------ft------------------*/
	char str[50];

	ft_strcpy(str, "This is string.h library function");
	printf("%s\n", str);

	ft_memset(str, '$', (0));
	printf("%s\n", str);

	return (0);
}
