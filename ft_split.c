/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-n <jduque-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:28:48 by jduque-n          #+#    #+#             */
/*   Updated: 2026/04/23 12:10:52 by jduque-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_sentence(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			while (*s && *s != c)
				s++;
			if (!*s)
				break ;
		}
		s++;
	}
	return (counter);
}

static char	**make_string_list(const char *s, char splitter)
{
	char	**str_list;

	if (!s)
		return (NULL);
	str_list = malloc(sizeof(char *) * (count_sentence(s, splitter) + 1));
	if (!str_list)
		return (NULL);
	str_list[count_sentence(s, splitter)] = NULL;
	return (str_list);
}

static	void	*ft_free_all(char **str_list)
{
	char	**transit;

	if (!str_list)
		return (NULL);
	transit = str_list;
	while (*transit)
		free(*transit++);
	free(str_list);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char			**str_list;
	char			**aux_list;
	const char		*word_start;

	str_list = make_string_list(s, c);
	if (!str_list)
		return (NULL);
	aux_list = str_list;
	while (*s)
	{
		if (*s != c)
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			*aux_list = ft_substr(word_start, 0, s - word_start);
			if (!*aux_list)
				return (ft_free_all(str_list));
			aux_list++;
		}
		else
			s++;
	}
	return (str_list);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "---This----string---is---so--confusing---";
// 	char	**temp_string;
// 	char	splitter = '-';
// 	char	**str_list;

// 	str_list = ft_split(str1, splitter);
// 	temp_string = str_list;
// 	while (*temp_string)
// 		printf("[%s]\n", *temp_string++);
// }
