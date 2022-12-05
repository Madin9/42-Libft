/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:23:06 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/14 12:23:10 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	index;
	char			*malloc_s1;

	malloc_s1 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!malloc_s1)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		malloc_s1[index] = s1[index];
		index++;
	}
	malloc_s1[index] = '\0';
	return (malloc_s1);
}
