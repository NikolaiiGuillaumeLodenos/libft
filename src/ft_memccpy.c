/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <glodenos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2100/01/01 00:00:00 by glodenos          #+#    #+#             */
/*   Updated: 2016/01/07 14:44:51 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	unsigned char	tmp_c;

	if (dest && src)
	{
		tmp_dest = (unsigned char *)dest;
		tmp_src = (unsigned char *)src;
		tmp_c = (unsigned char)c;
		while (n--)
		{
			*tmp_dest = *tmp_src;
			if (*tmp_src == tmp_c)
				return ((void *)(tmp_dest + 1));
			tmp_dest++;
			tmp_src++;
		}
	}
	return (NULL);
}
