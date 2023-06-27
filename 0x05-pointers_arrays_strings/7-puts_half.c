#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elrments of an array of interfers
 * @a: Array of intergers
 * @n: Number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n-1))
		{
			printf("%d", a[i]);
		}
		printf("\n");
}
