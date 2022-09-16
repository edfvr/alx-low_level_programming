#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz.
 * Return: 0 Success
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (((i % 3) == 0) && ((i % 5) == 0))
        {
            printf ("FizzBuzz");
            printf(" ");
        }
        else if ((i % 3) == 0)
        {
            printf ("Fizz");
            printf(" ");
        }
        else if ((i % 5) == 0)
        {
            printf ("Buzz");
            printf(" ");
        }
        else
        {
            printf("%d", i);
            printf(" ");
        }  
    }
    return (0);
}