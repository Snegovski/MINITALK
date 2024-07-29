/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:14:40 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:14:40 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( char *s1, char *s2, int n)
{
	int	c;

	c = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (c < n))
	{
		c++;
	}
	if (c == n)
	{
		return (0);
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
