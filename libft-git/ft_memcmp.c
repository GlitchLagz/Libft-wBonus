/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:25:23 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 14:11:09 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*un_s1;
	unsigned const char	*un_s2;

	un_s1 = (unsigned const char *)s1;
	un_s2 = (unsigned const char *)s2;
	while (n)
	{
		if (*un_s1 != *un_s2)
			return (*un_s1 - *un_s2);
		un_s1++;
		un_s2++;
		n--;
	}
	return (0);
}
