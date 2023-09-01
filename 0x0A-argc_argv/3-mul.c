#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array
 * Return: intger
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2 && argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
