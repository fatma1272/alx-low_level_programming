#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Retuen: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
