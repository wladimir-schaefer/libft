#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = 0;
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "abc";

	printf("%s\n", str);
	ft_bzero(str, 3);
	printf("%s\n", str);
	for (int i = 0; i < 3; i++)
		printf("str[%d] = %d\n", i, str[i]);

}
*/