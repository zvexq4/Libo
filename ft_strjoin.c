/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 02:05:15 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/09 02:26:39 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*comb;

	comb = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!comb)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		comb[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		comb[i] = s2[j];
		i++;
		j++;
	}
	comb[i] = '\0';
	return (comb);
}
