/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:29:51 by yomoon            #+#    #+#             */
/*   Updated: 2020/08/15 23:43:23 by yj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dup == '\0'|| s1 == '\0')
		return (0);
	ft_strlcpy(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}
