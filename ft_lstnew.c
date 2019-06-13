/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:32:53 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/12 16:58:29 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t size)
{
	t_list		*newlst;

	if (!(newlst = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else 
	{
		newlst = (struct s_list*)malloc(size);
		newlst->content_size = size;
	}
	newlst->next = NULL;
	return (newlst);
}
