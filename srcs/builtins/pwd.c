/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:31:17 by hberger           #+#    #+#             */
/*   Updated: 2020/05/02 16:41:55 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

void		builtinpwd(t_envar *envar)
{
	char	*tmp;

	tmp = getvar(envar, "PWD");
	if (tmp)
	{
		ft_putendl_fd(tmp, 1);
		g_exitvalue = EXIT_SUCCESS;
	}
	else
	{
		g_exitvalue = EXIT_FAILURE;
		return ;
	}
}
