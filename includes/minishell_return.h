/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_return.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:55:36 by eassouli          #+#    #+#             */
/*   Updated: 2022/04/12 14:21:15 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_RETURN_H
# define MINISHELL_RETURN_H

signed char	set_exit_status(int exit_status, int get);
signed char	set_exit_value(int exit_value);
signed char	get_exit_status(void);
signed char	get_exit_value(void);

typedef struct s_return_value
{
	signed char	status;
	t_bool			value;
}				t_return_value;

#endif