#includes <stdio.h>
/**
 * main - Starting point of execution
 *
 *Return: success, terminates program
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a short: %lu byte(s)\n", sizeof(short));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long: %lu byte(s)\n", sizeof(long));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of a double: %lu byte(s)\n", sizeof(double));
printf("Size of a long double: %lu byte(s)\n", sizeof(long double));

return 0;
}
