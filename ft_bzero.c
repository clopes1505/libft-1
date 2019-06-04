/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:43:56 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/28 06:14:25 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	char *str;

	if (n == 0)
		return (s);
	str = s;
	while (n--)
	{   
		*str = '\0';
		if (n)
			str++;
	}
	return(s);
}

int	main(void)
{
	char str[10];
	
	strcpy (str, "This is s");
	printf("before bzero : %s\n", str);
	bzero (str, 10);
	printf("after bzero : %s\n\n", str);

	char s[10];
	
	strcpy (s, "This is s");
	printf("before bzero : %s\n", s);
	ft_bzero (s, 10);
	printf("after bzero : %s", s);


}
