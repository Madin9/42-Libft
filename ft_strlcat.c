/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:25:54 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/18 13:25:57 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	index;
	size_t	index_j;

	index = 0;
	index_j = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	while (dst[index] && index < dstsize)
		index++;
	if (index < dstsize)
	{
		while (src[index_j] && index < (dstsize - 1))
			dst[index++] = src[index_j++];
		dst[index] = '\0';
	}
	while (src[index_j])
	{
		index++;
		index_j++;
	}
	return (index);
}
