#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	int newargc = argc - 1;

	printf("%d\n", newargc);

	return (0);
}
