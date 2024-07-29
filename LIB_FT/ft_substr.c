/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:50 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:58:50 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	index;
	char	*sub_string;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned long)ft_strlen(s))
		len = (unsigned long)ft_strlen(s);
	sub_string = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_string == NULL)
		return (NULL);
	index = 0;
	while (index < len && s[start] != '\0')
	{
		sub_string[index] = s[start];
		start++;
		index++;
	}
	sub_string[index] = '\0';
	return (sub_string);
}
