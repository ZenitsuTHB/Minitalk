/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:49:30 by avolcy            #+#    #+#             */
/*   Updated: 2023/06/23 15:49:34 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int v)
{
	if (v >= 32 && v <= 126)
		return (1);
	return (0);
}
