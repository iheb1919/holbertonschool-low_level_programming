#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 6)
{
printf("%d is less than 6", n);
}
else if (n > 5)
{
printf("%d is greater then 5", n);
}
else if (n == 0)
{
printf("%d is 0 and is 0", n);
}
return (0);
}
