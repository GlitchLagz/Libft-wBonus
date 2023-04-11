/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:30:54 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 14:24:18 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tlen;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	tlen = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tlen)
		return (0);
	while (s1[i] != '\0')
	{
		tlen[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
		tlen[i++] = s2[k++];
	tlen[i] = '\0';
	return (tlen);
}
