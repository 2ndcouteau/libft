/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_parse_arguments.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 20:55:19 by qrosa             #+#    #+#             */
/*   Updated: 2016/02/09 22:48:47 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_opt	*opt_parse_arguments(int argc, char **argv, char **init)
{
	t_opt	*opt;

	opt = NULL;
	if ((opt = malloc(sizeof(t_opt))))
	{
		opt_init_env(&opt, init);
		if (argc != 1)
			opt_get_options(argc, argv, &opt);
	}
	return (opt);
}
