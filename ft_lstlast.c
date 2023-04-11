/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:49:11 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/21 13:00:38 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;
	size_t	k;
	t_list	*lst2;

	k = 0;
	i = 0;
	lst2 = lst;
	while (lst2)
	{
		lst2 = lst2->next;
		k++;
	}
	while ((i + 1) < k)
	{
		lst = lst->next;
		i++;
	}	
	return (lst);
}
