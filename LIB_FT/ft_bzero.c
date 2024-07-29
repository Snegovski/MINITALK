/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:07:55 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/11 12:07:55 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	char	*v;
	size_t	b;

	v = (char *)s;
	b = 0;
	while (b < n)
	{
		v[b] = 0;
		b++;
	}
	return ;
}
