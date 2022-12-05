/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:35 by chonorat          #+#    #+#             */
/*   Updated: 2022/11/16 14:16:37 by chonorat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		index;
	int		index_j;

	index = 0;
	index_j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_str)
		return (NULL);
	while (s1[index])
	{
		new_str[index] = s1[index];
		index++;
	}
	while (s2[index_j])
		new_str[index++] = s2[index_j++];
	new_str[index] = '\0';
	return (new_str);
}
