/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:31:40 by wschafer          #+#    #+#             */
/*   Updated: 2025/05/07 15:26:20 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *str = "Hello, World!";
	int a = 111; // 'o'
	printf("%s\n", ft_strrchr(str, a));
	int b = 0; // '\0'
	printf("%s\n", ft_strrchr(str, b));
	int c = 49; // '1'
	if(ft_strrchr(str, c))
		printf("%s\n", ft_strrchr(str, c));
	else
		printf("Not found\n");
}
*/
