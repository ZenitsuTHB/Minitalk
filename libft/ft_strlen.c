/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:08:53 by avolcy            #+#    #+#             */
/*   Updated: 2023/09/20 18:44:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		++i;
	return (i);
}
/*int	main(void)
{
	char *v;

	v ="Imma Geek";
	printf("The lenght is :%d\n", ft_strlen(v));
	return (0);
}*/
