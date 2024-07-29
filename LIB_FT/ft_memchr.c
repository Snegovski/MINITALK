/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:42:42 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:42:42 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	unsigned char	*str;
	size_t			v;

	str = (unsigned char *)s;
	v = 0;
	while (v < n)
	{
		if (str[v] == (unsigned char)c)
		{
			return (str + v);
		}
		v++;
	}
	return (0);
}
