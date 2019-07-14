#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array thet contains line  arguments of argc
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isalpha(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
