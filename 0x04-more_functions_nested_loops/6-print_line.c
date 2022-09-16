#include <stdio.h>
#include "main.h"

/**
*print_line: a function that prints a line
*@n: parameter
*Return: returns nothing
*/

void print_line(int n)
{
	while(n-- > 0)
	{
		putchar('_');
	}
	putchar('\n')
}
