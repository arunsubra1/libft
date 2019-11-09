/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asubrama <asubrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:06:22 by asubrama          #+#    #+#             */
/*   Updated: 2019/08/11 15:29:12 by asubrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c)
{
	return (c == '\t' || c == '\v' || c == '\n'
	|| c == '\r' || c == '\f' || c == ' ');
}
