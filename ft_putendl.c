/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:36:39 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 08:50:17 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char *str;
	str = (char *) s;
	unsigned int i;

	i = ft_strlen(str);
	str[i] = '\n';
	ft_putstr(str);
}

int	main(void)
{
	char str[50];
	ft_strcpy (str, "Hello, World!");

	ft_putendl(str);
}
