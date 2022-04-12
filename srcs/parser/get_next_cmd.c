/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_cmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:30:39 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/22 13:28:15 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
**	create a new command and analyze all the tokens needed to execute the 
**	command.
*/

t_cmd	*get_next_cmd(t_token **token)
{
	t_cmd	*cmd;

	if (!token || !*token)
		return (NULL);
	cmd = malloc_cmd();
	if (!cmd)
		return (NULL);
	if (parse_all_redirection(cmd, token) == FAILURE
		|| parse_cmd_argv(cmd, token) == FAILURE
		|| parse_control_operator(cmd, token) == FAILURE)
	{
		free_cmd(cmd);
		return (NULL);
	}
	return (cmd);
}
