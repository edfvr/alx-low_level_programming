#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc : number of arguments passed to the program
 * @argv : an array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
