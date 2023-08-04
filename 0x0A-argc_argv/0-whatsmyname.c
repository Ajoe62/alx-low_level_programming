#include <stdio.h>

/**
 * main - func that Prints the program name, followed by a new line.
 * @argc: The num of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
