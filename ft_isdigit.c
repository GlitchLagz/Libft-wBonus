/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:39 by tpawson           #+#    #+#             */
/*   Updated: 2023/03/22 13:02:27 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int test)
{
	if (test > 47 && test < 58)
		return (1);
	else
		return (0);
}