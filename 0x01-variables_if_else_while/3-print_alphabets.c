#include <stdio.h>
/**
  * main - Program starts here
  * Return: 0
  */
int main(void)
{
	int abc;

		for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);

		for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);

		putchar('\n');
		return (0);
}
