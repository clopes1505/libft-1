/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:12:07 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/05 15:06:03 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap)
		return ((void)NULL);
	free(*ap);
	*ap = NULL;
}
