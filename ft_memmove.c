/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:25:30 by yomoon            #+#    #+#             */
/*   Updated: 2020/08/16 00:25:10 by yj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstchar;
	unsigned char	*srcchar;
	int				i;

	dstchar = (unsigned char *)dst;
	srcchar = (unsigned char *)src;
	if(!dst || !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			dstchar[i] = srcchar[i];
			i++;
		}
	}
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			dstchar[i] = srcchar[i];
			i--;
		}
	}
	return (dst);
}
