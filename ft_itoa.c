/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:08:52 by wschafer          #+#    #+#             */
/*   Updated: 2025/05/20 16:08:57 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static	size_t	get_lenth(int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	sign;
	size_t	len;
	size_t	i;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	len = get_lenth(n);
	str = malloc((len + sign + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = len + sign;
	str[i] = '\0';
	while (i > 0)
	{
		str[i-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

static	size_t	get_lenth(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int a = -1234;
//	int b = -2147483648;
	char *str;

	str = ft_itoa(a);
//	printf("%s\n", str);
	while (*str)
	{
		printf("%c\n", *str);
		str++;
	}
	printf("%c\n", str[5]);
//	str = ft_itoa(b);
//	printf("%s\n", str);0
}
*/