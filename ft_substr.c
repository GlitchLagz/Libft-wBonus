/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:47:07 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 14:46:57 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*sub;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	i = 0;
	k = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (0);
	while (s[i])
	{	
		if (k < len && i >= start)
		{
			sub[k++] = s[i];
		}
		i++;
	}
	sub[k] = '\0';
	return (sub);
}
