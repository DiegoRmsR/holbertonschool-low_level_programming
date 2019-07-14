#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array thet contains line arguments of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int carac;

	for (carac = 0; carac < argc; carac++)
	{
		printf("%s\n", argv[carac]);
	}
	return (0);
}
