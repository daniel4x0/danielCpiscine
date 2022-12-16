/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzegbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:05:21 by duzegbu           #+#    #+#             */
/*   Updated: 2022/12/05 15:27:21 by duzegbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*destination;
	char	*t;

	i = 0;
	t = ((destination = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!t)
	{
		return (0);
	}
	while (src[i])
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
