#include <stdio.h>
#include "main.h"

/*
 * main - prints number of arguments passed onto it
 * argc:  argument count
 * argv: argument vector or string of arrays
 * char: - character
 * return: always 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
