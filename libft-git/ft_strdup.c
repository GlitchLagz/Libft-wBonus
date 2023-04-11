/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:19:53 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 14:18:53 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupped;
	size_t	i;
	size_t	s1len;

	s1len = ft_strlen(s1);
	dupped = malloc((s1len) + 1);
	i = 0;
	if (dupped == 0)
		return (dupped);
	while (s1[i] != '\0')
	{
		dupped[i] = s1[i];
		i++;
	}
	dupped[i] = '\0';
	return (dupped);
}
