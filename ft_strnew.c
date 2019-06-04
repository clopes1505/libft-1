/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:20:15 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 06:32:28 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *str;

	str = (void*) malloc(size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
