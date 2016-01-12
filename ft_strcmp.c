/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <glodenos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2100/01/01 00:00:00 by glodenos          #+#    #+#             */
/*   Updated: 2100/01/01 00:00:00 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (*s1 - *s2);
	else if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	else
		return (*s1 - *s2);
}