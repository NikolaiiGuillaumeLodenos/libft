/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:08:43 by glodenos          #+#    #+#             */
/*   Updated: 2016/09/05 22:23:33 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen_tab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		;
	return (i);
}
