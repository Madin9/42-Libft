/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:43:39 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/08 17:43:41 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*unsigned_s1;
	unsigned char	*unsigned_s2;

	unsigned_s1 = (unsigned char *)s1;
	unsigned_s2 = (unsigned char *)s2;
	index = 0;
	while ((s1[index] || s2[index]) && index < n)
	{
		if ((s1[index] - s2[index]) != 0)
			return (unsigned_s1[index] - unsigned_s2[index]);
		index++;
	}
	return (0);
}
