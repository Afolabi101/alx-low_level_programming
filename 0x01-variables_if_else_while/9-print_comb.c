# include <stdio.h>
/**
 * main - random number
 *
 * Description - mainfunction
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if(c != '9')
		{
		putchar(c);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
