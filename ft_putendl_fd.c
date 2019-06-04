/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:52:44 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 09:00:58 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *str;
	str = (char *) s;
	unsigned int i;

	i = ft_strlen(str);
	str[i] = '\n';
	ft_putstr_fd(str, fd);
}

int	main(void)
{
	char str[50];
	ft_strcpy (str, "Hello, World!");

	ft_putendl_fd(str, 1);
}
