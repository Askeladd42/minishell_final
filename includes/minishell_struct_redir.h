/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_struct_redir.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:29:00 by lvirgini          #+#    #+#             */
/*   Updated: 2022/04/12 14:34:55 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_STRUCT_REDIR_H
# define MINISHELL_STRUCT_REDIR_H

/*
** Multi redirection possibility :
** like > file1 > file2 > file3
*/

typedef struct s_redirection	t_redir;
struct s_redirection
{
	char	*filename;
	int		type;
	t_bool	need_expand;
	t_redir	*next;
};

typedef struct s_heredoc		t_hdoc;
struct s_heredoc
{
	t_bool	need_expand;
	int		priority;
	char	*delimitor;
	char	**data;
	t_hdoc	*next;
};

/*
** init structure t_redir : 
*/

t_redir		*create_redir(int type, char *filename);
void		free_list_redir(t_redir *redir);

/*
**	management heredoc : 
*/

t_hdoc		*malloc_heredoc(void);
t_hdoc		*create_heredoc(char *delimitor);
void		free_list_heredoc(t_hdoc *heredoc);

#endif
