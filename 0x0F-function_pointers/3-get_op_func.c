#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add-sum of a,b
 * @a:value 1
 * @b:value 2
 * Return:int ans
 */
int op_add(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		printf("Errori\n");
		exit(98);
	}
	return (a + b);
}
/**
 * op_sub-subtraction of a,b
 * @a:value 1
 * @b:value 2
 * Return:int ans
 */
int op_sub(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	return (a - b);
}
/**
 * op_mul-multiplication of a,b
 * @a:value 1
 * @b:value 2
 * Return:int ans
 */
int op_mul(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	return (a * b);
}
/**
 * op_div-division of a,b
 * @a:value 1
 * @b:value 2
 * Return:int ans
 */
int op_div(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a / b);
}
/**
 * op_mod-sum of a,b
 * @a:value 1
 * @b:value 2
 * Return:int ans
 */
int op_mod(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}
