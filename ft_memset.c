#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char)c;

	return s;
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "abc";

	printf("%s\n", str);
	ft_memset(str, 'X', 2);
	printf("%s\n", str);
}
*/