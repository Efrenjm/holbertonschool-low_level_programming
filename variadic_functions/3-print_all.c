#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format of the variable
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator;
	const char *current_format = format;

	separator = "";
	current_format = format;
	va_start(args, format);

	while (current_format != NULL && *current_format != '\0')
	{
		switch (*current_format)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				separator = ", ";
				break;
		}
		current_format++;
	}
	printf("\n");

	va_end(args);
}
