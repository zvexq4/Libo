/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 00:58:52 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/09 19:20:38 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	char *kulanici = "    xxxxHamza    xxxx";
	char *yeni;
	yeni = ft_strtrim(kulanici," xHaz");
	printf("%s", yeni);
}