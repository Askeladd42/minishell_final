/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:37:45 by eassouli          #+#    #+#             */
/*   Updated: 2022/04/12 14:24:57 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

extern t_return_value	g_exit;

void	print_echo(char **arg, int i)
{
	while (arg[i++])
	{
		ft_putstr(arg[i]);
		if (arg[i + 1] != NULL)
			ft_putstr(" ");
	}
}

int	is_trail(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '-')
		return (0);
	if (str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i] && str[i] == 'n')
		i++;
	if (str[i])
		return (0);
	return (1);
}

void	exec_echo(char **arg, char ***env)
{
	int	i;
	int	trail;

	(void)env;
	i = 0;
	trail = 0;
	g_exit.status = 0;
	if (arg[i] == NULL)
	{
		ft_putstr("\n");
		return ;
	}
	while (arg[i] && is_trail(arg[i]) == 1)
	{
		trail = 1;
		i++;
	}
	print_echo(arg, i);
	if (trail == 0)
		ft_putstr("\n");
}
