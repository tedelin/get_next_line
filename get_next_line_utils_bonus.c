/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:32:12 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/20 16:32:14 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_alloc(char *buff)
{
	int	len;

	if (!(*buff))
		return (0);
	len = 0;
	while (buff[len] && buff[len] != '\n')
		len++;
	if (buff[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
	{
		while (s[i])
			i++;
		return ((char *)(s + i));
	}
	while (s != NULL && *s)
	{
		if (*s == c % 256)
			return ((char *)s);
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		j;
	int		i;

	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new)
	{
		j = 0;
		i = 0;
		while (s1 && s1[i])
			new[j++] = s1[i++];
		i = 0;
		while (s2 && s2[i])
			new[j++] = s2[i++];
		new[j] = '\0';
	}
	return (free(s1), free(s2), new);
}	

char	*ft_strdup(char *s, char *f)
{
	int		i;
	char	*dest;

	if (s && s[0] == '\0')
		return (free(f), NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest)
	{
		i = 0;
		while (s[i] != '\0')
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (free(f), dest);
}
