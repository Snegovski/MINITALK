/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:54:35 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:54:35 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	char	*str;
	int		v;

	str = (char *)s;
	v = 0;
	while (str[v] != '\0')
	{
		v++;
	}
	while (v != 0 && str[v] != (char)c)
	{
		v--;
	}
	if (v == 0 && str[v] != (char)c)
		return (NULL);
	return (str + v);
}
