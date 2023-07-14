#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start of Program
 *
 * Return: success, Terminates program
 */
int main(void)
{
int n;

srand(time(NULL));

n = rand() % 201 - 100;
    
printf("The number is: %d\n", n);

if (n > 0) {
printf("is positive\n");
} else if (n == 0) {
printf("is zero\n");
} else {
printf("is negative\n");
}

return (0);
}
