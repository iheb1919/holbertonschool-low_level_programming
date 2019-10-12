#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int money;
int i;
int count;
int coins[5] = {25, 10, 5, 2, 1};

count = 0;
money = 0;

if (argc == 2)
{
for (i = 0; i <= 4; i++)
{
if (atoi(argv[1]) >= coins[i])
{
money = atoi(argv[1]) / coins[i];
count = atoi(argv[1]) % coins[i];
break;
}
}

for (i = 0; i <= 4; i++)
{
if (count >= coins[i])
{
money++;
count = count - coins[i];
i = 0;
}
}
} else
{
printf("Error\n");
return (1);
}
printf("%d\n", money);
return (0);
}
