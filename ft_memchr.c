/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 14:51:01 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/06 15:41:23 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char	wanted;
	size_t			i;

	str = (const unsigned char *)s;
	wanted = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == wanted)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}