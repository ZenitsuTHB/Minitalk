/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:54:40 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/20 18:25:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error_handling(char *error_msg, char *usage)
{
	write(STDERR_FILENO, "Error !\n", 8);
	write(STDERR_FILENO, error_msg, ft_strlen(error_msg));
	write (STDERR_FILENO, usage, ft_strlen(usage));
	exit(EXIT_FAILURE);
}
