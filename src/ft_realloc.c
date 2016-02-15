/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 11:22:44 by glodenos          #+#    #+#             */
/*   Updated: 2016/02/15 12:11:13 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*tmp;

	if (!size && ptr)
	{
		if (!(tmp = (char *)malloc(1)))
			return (NULL);
		ft_memdel(&ptr);
		return (tmp);
	}
	if (!(tmp = (char *)malloc(size)))
		return (NULL);
	if (ptr)
	{
		ft_memcpy(tmp, ptr, size);
		ft_memdel(&ptr);
	}
	return (tmp);
}
