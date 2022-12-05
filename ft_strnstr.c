/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:33:32 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/09 11:33:35 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if ((!haystack || !needle) && len == 0)
		return (0);
	if (needle[i] == '\0')
		return (((char *)haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j < len))
			{
				j++;
				if (needle[j] == '\0')
					return (&((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (NULL);
}
