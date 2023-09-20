/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:46:38 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/20 19:34:30 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	ft_check_arg(int ac, char **av)
{
	int	i;

	i = 0;
	i = 0;
	if (ac != 3)
		ft_error_handling(INVALID_ARG_ERR, USAGE_MESSAGE);
	while (av[1][i])
		if (av[1][i] <= 0 || !ft_isdigit(av[1][i++]))
			ft_error_handling(INVALID_PID_ERR, PID_EXAMPLE);
}

static	int	ft_send_msg(pid_t s_pid, char idx_2a)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (kill(s_pid, 0) != 0)
		{
			ft_putstr_fd("Server unreachable ! check the process !\n", 1);
			exit(EXIT_FAILURE);
		}
		else if ((idx_2a & 1 << i) != 0)
			kill(s_pid, SIGUSR1);
		else
			kill(s_pid, SIGUSR2);
		usleep(100);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	pid_t	s_pid;

	i = 0;
	str = (argv[2]);
	ft_check_arg(argc, argv);
	s_pid = ft_atoi(argv[1]);
	if (s_pid <= 0)
	{
		ft_putstr_fd(INVALID_PID_ERR, 2);
		exit(EXIT_FAILURE);
	}
	else
	{
		while (*str)
		{
			if (ft_send_msg(s_pid, *str) == -1)
				return (0);
			else
				str++;
		}
	}
	return (0);
}
