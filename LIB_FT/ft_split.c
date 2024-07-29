/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:50:27 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/15 16:13:06 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_single_string(char const *s, int *s_index, char c)

{
	int		index;
	char	*single_string;

	index = 0;
	while (s[*s_index] == c)
		(*s_index)++;
	index = *s_index;
	while (s[index] != c && s[index] != '\0')
		index++;
	single_string = malloc(sizeof(char) * ((index - *s_index) + 1));
	if (single_string == NULL)
		return (NULL);
	index = 0;
	while (s[*s_index] != c && s[*s_index] != '\0')
	{
		single_string[index] = s[*s_index];
		index++;
		(*s_index)++;
	}
	single_string[index] = '\0';
	return (single_string);
}

int	word_counter(char const *s, char c)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		while (s[index] != c && s[index] != '\0')
		{
			index++;
			if (s[index] == c || s[index] == '\0')
			{
				word_count++;
				break ;
			}
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		word_count;
	int		s_index;
	char	**split_array;

	index = 0;
	word_count = 0;
	s_index = 0;
	if (s == NULL)
		return (NULL);
	word_count = word_counter(s, c);
	split_array = malloc(sizeof(char *) * (word_count + 1));
	if (split_array == NULL)
		return (NULL);
	while (index < word_count)
	{
		split_array[index] = get_single_string(s, &s_index, c);
		index++;
	}
	split_array[index] = 0;
	return (split_array);
}
