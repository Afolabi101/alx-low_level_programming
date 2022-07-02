#include <stdio.h>
/**
 * main - description using putchar for hexadcimals
 *
 * Description - main function
 * Return :0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
