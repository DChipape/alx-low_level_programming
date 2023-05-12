#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints the number of arguments passed
 * @argc: Number of arguments passed
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
