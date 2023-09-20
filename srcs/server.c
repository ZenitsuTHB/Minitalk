/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:30:41 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/20 18:40:50 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	ft_handle_msg(int signal)
{
	static int	i = 0;
	static int	c = 0;

	if (signal == SIGUSR1)
		c = c | (1 << i);
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	pid_t	sv_pid;

	sv_pid = getpid();
	ft_putstr_fd("PID : ", 1);
	ft_putnbr_fd(sv_pid, 1);
	write (1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, &ft_handle_msg);
		signal(SIGUSR2, &ft_handle_msg);
		sleep(1);
	}
	return (0);
}
