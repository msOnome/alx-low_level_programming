#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0, (Success)
 */
int main(void)
{
srand(time(NULL));
int n = rand() % 3 - 1;
switch (n)
{
case -1;
printf("%d is negative\n", n);
break;
case 0;
printf("%d is zero\n", n);
break;
case 1;
printf("%d is positive\n", n);
break;
}
return (0)
}
