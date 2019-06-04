/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:02:19 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/29 15:48:46 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *ls, const char *rs)
{
	if (ft_strcmp(ls, rs) == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	const char *str = "Police";
	const char *str2 = "Policeman";
	int i;

	i = ft_strequ(str, str2);
	printf("%i", i);
}
