#include <stdio.h>
#include "main.h"

/*
 * function main - starting point of code execution
 * argc - argument count
 * argv - argument vector or string of arrays
 * return - always 0 on success
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
