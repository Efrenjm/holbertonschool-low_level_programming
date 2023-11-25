#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format of the variable
 * Return: nothing
 */
/*void print_one(const char *current_format)
{
	printf("%s%c", separator, va_arg(args, int));
}*/
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
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
                                	str = "(nil)";
                        	printf("%s%s", separator, str);
				break;
		}
		/*if (*current_format == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (*current_format == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (*current_format == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (*current_format == 's')
		{
			str = va_arg(args, char * );
			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}*/
		separator = ", ";
		current_format++;
		if (*current_format == '\0')
			printf("\n");
	}

	va_end(args);
}
