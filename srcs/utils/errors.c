/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:56:32 by hberger           #+#    #+#             */
/*   Updated: 2020/02/21 14:02:57 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"
#include <sys/errno.h>

void		handle_error(char *message)
{
	if (message)
		ft_putendl_fd(message, 2);
	else
		perror(strerror(errno));
	exit(EXIT_FAILURE);
	// REMEMBER $?
}
