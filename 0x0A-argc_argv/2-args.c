#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc : number of arguments passed to the program
 * @argv : array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0;

	for (; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
