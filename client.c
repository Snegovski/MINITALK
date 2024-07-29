/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:29:10 by ral-bakr          #+#    #+#             */
/*   Updated: 2024/07/29 18:32:38 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	argument_check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_putstr_fd("\nError: Invalid number of arguments\n", 2);
		return (-1);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]) || ft_strlen(argv[1]) > 31)
		{
			ft_putstr_fd("\nError: Invalid PID\n", 2);
			return (-1);
		}
		i++;
	}
	if (argv[2] == 0)
	{
		ft_putstr_fd("\nError: Empty message\n", 2);
	}
	return (0);
}

void	send_char(int pid, char c)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (i < 8)
	{
		if (c & 1)
			check = kill(pid, SIGUSR1);
		else
			check = kill(pid, SIGUSR2);
		c >>= 1;
		usleep(100);
		i++;
		if (check == -1)
		{
			ft_putstr_fd("\nError: Invalid PID\n", 2);
			exit(1);
		}
	}
}

int	main(int argc, char **argv)
{
	char	*string;
	int		pid;

	if (argument_check(argc, argv) == -1)
	{
		ft_putstr_fd("Usage: ./client [PID] [string]\n", 2);
		return (-1);
	}
	pid = ft_atoi(argv[1]);
	string = argv[2];
	string = ft_strjoin(string, "\n");
	while (*string)
	{
		send_char(pid, *string);
		string++;
	}
	return (0);
}
