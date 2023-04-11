/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:00:58 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 18:39:18 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hs, const char *n, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (n[i] == '\0')
		return ((char *)hs);
	while (hs[i] != '\0')
	{
		k = 0;
		while (hs[i + k] == n[k] && (i + k) < len)
		{
			if (hs[i + k] == '\0' && n[k] == '\0')
				return ((char *)&hs[i]);
			k++;
		}
		if (n[k] == '\0')
			return ((char *)hs + i);
		i++;
	}
	return (0);
}
