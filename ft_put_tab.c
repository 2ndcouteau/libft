/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 17:44:09 by qrosa             #+#    #+#             */
/*   Updated: 2016/04/03 22:36:04 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_tab(char **mytab)
{
	int		cpt;

	cpt = 0;
	while (mytab[cpt] != NULL)
		ft_putendl(mytab[cpt++]);
}
