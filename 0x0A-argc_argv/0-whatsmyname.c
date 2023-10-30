#include <stdio.h>
/**
 * main - prints name of program, then new line
 * @argc : number of arguments passed to the program
 * @argv : array of strings
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
