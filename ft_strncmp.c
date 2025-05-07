/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:31:10 by wschafer          #+#    #+#             */
/*   Updated: 2025/05/07 15:25:02 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str1 = "aba";
	const char *str2 = "abc";
	printf("%d\n", ft_strncmp(str1, str2, 3));
}
*/
