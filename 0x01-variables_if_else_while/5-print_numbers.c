#include <stdio.h>
/**
 * main -Entry point
 * Return: always 0;
 */
int main(void)
{
	char num[10] = "0123456789";
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(num[n]);
	}
	putchar('\n');
	return (0);
}
