/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:24:40 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:24:40 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	c;
	size_t	v;
	char	*str;

	str = 0;
	if (s1 != NULL && set != NULL && s1[0] != '\0')
	{
		c = 0;
		while (s1[c] && ft_strchr(set, s1[c]))
			c++;
		v = ft_strlen(s1);
		v--;
		while (s1[v] && ft_strchr(set, s1[v]) && v > c)
			v--;
		str = (char *)malloc(sizeof(char) * (v - c + 2));
		if (str)
			ft_strlcpy(str, (char *)s1 + c, v - c + 2);
	}
	else if (s1 != 0 && set != 0 && s1[0] == '\0')
	{
		str = (char *)malloc(sizeof(char) * (1));
		str[0] = '\0';
	}
	return (str);
}
