/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:45:27 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/15 16:14:39 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	stringnumbercounter(int n)
{
	int	v;

	v = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		v++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		v++;
	}
	return (v);
}

char	*ft_itoa(int n)

{
	char	*pointer1;
	int		c;

	pointer1 = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	c = stringnumbercounter(n);
	if (n == 0)
		return (ft_strdup("0"));
	pointer1 = malloc(sizeof(char) * (c + 1));
	if (pointer1 == NULL)
		return (NULL);
	pointer1[c--] = '\0';
	if (n < 0)
	{
		pointer1[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		pointer1[c] = n % 10 + '0';
		n = n / 10;
		c--;
	}
	return (pointer1);
}
