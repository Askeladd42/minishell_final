/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_hdoc_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:25:43 by lvirgini          #+#    #+#             */
/*   Updated: 2022/04/12 14:39:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	free_heredoc(t_hdoc *heredoc)
{
	free(heredoc->delimitor);
	free_list(heredoc->data);
	free(heredoc);
}

void	free_list_heredoc(t_hdoc *heredoc)
{
	t_hdoc		*next;

	while (heredoc)
	{
		next = heredoc->next;
		free_heredoc(heredoc);
		heredoc = next;
	}
}
