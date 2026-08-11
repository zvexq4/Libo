/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:41:23 by hciftci           #+#    #+#             */
/*   Updated: 2026/08/11 20:36:25 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word_dup(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static void	ft_free(char **rescontrol, int j)
{
	while (j > 0)
	{
		j--;
		free(rescontrol[j]);
	}
	free(rescontrol);
}

static int	fill_result(char **result, const char *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = word_dup(&s[i], c);
			if (!result[j])
			{
				ft_free(result, j);
				return (-1);
			}
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (fill_result(result, s, c) == -1)
		return (NULL);
	return (result);
}
