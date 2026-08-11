/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 20:47:29 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/11 20:47:31 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	print_result(char **result)
{
	int	i;

	if (!result)
	{
		printf("NULL\n");
		return ;
	}
	i = 0;
	while (result[i])
	{
		printf("  [%d] = \"%s\"\n", i, result[i]);
		i++;
	}
}

static void	free_result(char **result)
{
	int	i;

	if (!result)
		return ;
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static void	test_split(const char *str, char c, const char *name)
{
	char	**result;

	printf("\n========================================\n");
	printf("TEST: %s\n", name);
	printf("String    : \"%s\"\n", str);
	printf("Delimiter : '%c'\n", c);
	printf("----------------------------------------\n");

	result = ft_split(str, c);

	printf("Result:\n");
	print_result(result);

	free_result(result);
}

int	main(void)
{
	printf("********** FT_SPLIT TESTER **********\n");

	/* Normal cases */
	test_split("hello world", ' ', "Normal");
	test_split("hello world 42", ' ', "Three words");
	test_split("hello", ' ', "Single word");

	/* Multiple delimiters */
	test_split("hello   world", ' ', "Multiple spaces");
	test_split("   hello world", ' ', "Spaces at beginning");
	test_split("hello world   ", ' ', "Spaces at end");
	test_split("   hello   world   ", ' ', "Spaces everywhere");

	/* Only delimiters */
	test_split("     ", ' ', "Only spaces");
	test_split(",,,,,", ',', "Only commas");

	/* Empty string */
	test_split("", ' ', "Empty string");

	/* Delimiter does not exist */
	test_split("hello world", ',', "Delimiter not found");

	/* Different delimiters */
	test_split("hello,world,42", ',', "Comma delimiter");
	test_split("hello:world:42", ':', "Colon delimiter");
	test_split("hello-world-42", '-', "Dash delimiter");

	/* Repeated delimiters */
	test_split("hello,,,world,,,42", ',', "Repeated commas");
	test_split("hello::::world::::42", ':', "Repeated colons");

	/* One-character strings */
	test_split("a", ' ', "One character");
	test_split("a a a", ' ', "Repeated one-character words");

	/* Delimiter at every position */
	test_split("a,b,c,d,e", ',', "Comma between every word");
	test_split(",a,b,c,", ',', "Delimiters at both ends");

	/* Special delimiter */
	test_split("hello world", '\0', "Null character delimiter");

	/* NULL input */
	printf("\n========================================\n");
	printf("TEST: NULL input\n");
	printf("----------------------------------------\n");
	printf("Result: ");
	print_result(ft_split(NULL, ' '));

	printf("\n********** TESTS FINISHED **********\n");

	return (0);
}