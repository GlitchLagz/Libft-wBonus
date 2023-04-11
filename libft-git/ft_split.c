/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:35:01 by tpawson           #+#    #+#             */
/*   Updated: 2023/04/07 13:40:46 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	wcounter(char const *str, char c)
{
	size_t	wcount;
	size_t	trigger;

	wcount = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			wcount++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (wcount);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(n + 1);
	if (!str)
		return (0);
	while (s1[i] && (i < n))
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= n)
		str[i++] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	k = wcounter(s, c);
	split = malloc(sizeof(char *) * (k + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (i < k)
	{
		while (s[j] == c)
			j++;
		s = &s[j];
		j = 0;
		while (s[j] != c && s[j])
			j++;
		split[i++] = ft_strndup(s, j);
	}
	split[i] = 0;
	return (split);
}
