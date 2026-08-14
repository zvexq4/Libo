/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:40:16 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/14 07:36:45 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstadd;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lstadd = ft_lstlast(*lst);
	lstadd -> next = new;
}
