#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
		{
			continue;
		}

		putchar(i);
		putchar(j);

		if (i == 56 && j == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');	
		}
		}
	}
	putchar(''\n')
	return (0);
}

