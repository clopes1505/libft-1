/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:46:47 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/24 10:22:23 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
   char src[40];
   char dest[12];

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
/*-------------------ft-----------------------*/
   char s[40];
   char d[12];

   memset(d, '\0', sizeof(d));
   strcpy(s, "This is tutorialspoint.com");
   strncpy(d, s, 10);

   printf("Final copied string : %s\n", d);
}
