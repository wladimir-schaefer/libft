int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%c\n", ft_toupper('a')); // prints 'A'
	printf("%c\n", ft_toupper('Z')); // prints 'Z'
	printf("%c\n", ft_toupper('1')); // prints '1'
}
*/