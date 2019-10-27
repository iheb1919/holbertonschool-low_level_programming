#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums a variable number of parameters
 * @n: const unsigned int number of parameters
 * Return: integer sum of int arguments, or 0 is n == 0
 * @...: elipsis 
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list nums;
va_start(nums, n);
if (n == 0)
return (0);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
