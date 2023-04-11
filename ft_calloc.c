/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:28:24 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 14:18:15 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	total;
	size_t	i;

	total = (count * size);
	cal = malloc(total);
	i = 0;
	if (cal == 0)
		return (cal);
	while (total > 0 && i != total)
	{
		((unsigned char *)cal)[i] = '\0';
		i++;
	}
	return (cal);
}
