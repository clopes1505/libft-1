/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:36:39 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:12:08 by jhouston         ###   ########.fr       */
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
