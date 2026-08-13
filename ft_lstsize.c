/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:47:18 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/12 17:49:30 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst -> next;
	}
	return(size);
}