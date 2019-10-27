#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function thqt print numbers followed by new lien
 * @separator: pointer
 * @n: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;
if (n)
{
va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (separator && i < n - 1)
printf("%s", separator);
}
va_end(nums);
}
printf("\n");
}
