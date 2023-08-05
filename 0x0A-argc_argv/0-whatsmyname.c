#include <stdio.h>
#include "main.h"

/*
 *main - prints name of program, followed by a new line
 * argc - argument count
 * argv - array of arguments
 *
 * Return: Aways 0 for success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
