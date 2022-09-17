#include <stdio.h>
#include <stdio.h>


/**
 * main - prints reversed alphabet.
 *
 * Return: Always 0 (success)
 * main- Write a program that prints all possible 
 * combinations of a single-digit numbers
 * Return: 0 (success)
 */

int main (void)
{
	int i;
	int d;

	for (i = 122; i > 96; i--)
	for (d = '0'; d <= '9'; d++)
	{
		putchar(i);
		putchar(d);
		if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('/n');
return (0);
	
