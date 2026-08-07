/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:08:11 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/06 15:41:02 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	char *ad = "hamza";
	void *adres;
	adres = ft_memchr(ad, 'm',5);
	printf("m nin adresi = %p\n",&ad[2]);
	printf("bulunan adres = %p", adres);

}