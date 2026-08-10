/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:00:07 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/09 19:16:41 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	head;
	size_t	last;
	size_t	len;
	char	*trimmed;

	head = 0;
	last = ft_strlen(s1);
	while (s1[head] && ft_strchr(set, s1[head]))
		head++;
	while (last > head && ft_strchr(set, s1[last - 1]))
		last--;
	len = last - head;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + head, len);
	trimmed[len] = '\0';
	return (trimmed);
}
