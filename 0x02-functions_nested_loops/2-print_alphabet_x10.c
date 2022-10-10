#include "main.h"
/**
  * print_alphabet_x10 - Prints alphabets ten times
  *
  * Return: zero
  */
void print_alphabet_x10(void)
{
	int c, d;

	for (c = 1; c <= 10; c++)
	{	
		for (d = 'a'; d <= 'z'; d++)
		{	
			_putchar(d);
		}
			_putchar('\n');
	}

}
