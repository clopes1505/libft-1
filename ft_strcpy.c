/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:20:45 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 08:50:20 by jhouston         ###   ########.fr       */
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
/*
int	main(void)
{
	char src[40];
	char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n\n\n", dest);   
*------------------------ft-------------------------*
   char s[40];
   char d[100];
  
   memset(d, '\0', sizeof(d));
   strcpy(s, "This is tutorialspoint.com");
   strcpy(d, s);

   printf("Final copied string : %s\n", d);
   
   return(0);
}
*/
