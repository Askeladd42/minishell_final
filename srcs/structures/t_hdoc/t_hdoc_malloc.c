/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_hdoc_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:09:52 by lvirgini          #+#    #+#             */
/*   Updated: 2022/04/12 14:39:32 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_hdoc	*malloc_heredoc(void)
{
	t_hdoc	*heredoc;

	heredoc = (t_hdoc *)malloc(sizeof(t_hdoc));
	if (!heredoc)
	{
		perror("malloc in malloc_heredoc()");
		return (NULL);
	}
	return (heredoc);
}
