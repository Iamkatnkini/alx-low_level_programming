#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (size > 0)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int C = *(b + o + i);

			if (C < 32 || C > 132)
			{
				C = '.';
			}
			printf("%c", C);
		}
		printf("\n");
		o += 10;
	}
}
