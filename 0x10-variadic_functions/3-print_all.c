#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: constant string specifying types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[++i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
