#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'Write a function that prints all natural numbers'
 * @parameter: form 98 to 0
 * 
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
