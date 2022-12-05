/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:02:38 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/08 16:02:40 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			return (&((char *)s)[index]);
		index++;
	}
	if (s[index] == (unsigned char)c)
		return (&((char *)s)[index]);
	return (NULL);
}
