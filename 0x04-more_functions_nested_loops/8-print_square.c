#include <stdio.h>
#include "main.h"

/**
*more_functions_nested_loops: a fuction that prints a square
*@size: parameter
*Return: nothing to return
*/

void print_square(int size)
{
	int length, width;

	for(length = 0; length < size; length++)
	{
		for(width = 0; width < size; width++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
