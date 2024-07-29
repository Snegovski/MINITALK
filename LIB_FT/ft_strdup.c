/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:50:19 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:50:19 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)

{
	int		c;
	char	*v;

	c = 0;
	while (str[c] != '\0')
		c++;
	v = malloc(sizeof(char) * (c + 1));
	if (!v)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
	{
		v[c] = str[c];
		c++;
	}
	v[c] = '\0';
	return (v);
}
