/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:51 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 13:02:39 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int t)
{
	if ((t > 47 && t < 58) || (t > 64 && t < 91) || (t > 96 && t < 123))
		return (1);
	else
		return (0);
}