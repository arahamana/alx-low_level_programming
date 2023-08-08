#include <stdio.h>
#include "main.h"

/*
 * int main - prints name of program followed by a new line
 * argc - argument count
 * argv - argument vector or string of arrays
 * return - always 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc);

	return (0);
}
