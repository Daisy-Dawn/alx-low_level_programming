#include "main.h"
#include "stdio.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
