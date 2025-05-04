#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while(*s)
	{
		if(*s == (char)c)
			last = s;
		s++;
	}
	if((char)c == '\0')
		return((char *)s);
	return((char *)last);
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