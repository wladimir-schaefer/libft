#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char)c)
			return((char *)s);
		s++;
	}
	if((char)c == '\0')
		return((char *)s);
	return(NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *str = "Hello, World!";
	int a = 87; // 'W'
	printf("%s\n", ft_strchr(str, a));
	int b = 0; // '\0'
	printf("%s\n", ft_strchr(str, b));
}
*/