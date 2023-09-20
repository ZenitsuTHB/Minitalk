/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:00:04 by avolcy            #+#    #+#             */
/*   Updated: 2023/06/08 19:12:46 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		++str;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return (NULL);
}
/*int	main(void)
{
	const char	s[] = "haloooo.";
	int	c = 'l';
	char	*p;
	p = ft_strchr(s, c);
	printf("%s\n", p);
	printf("r %s", strchr(s, 'l'));
	return (0);
}*/
