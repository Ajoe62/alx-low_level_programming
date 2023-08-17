#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - func that prints anything.
  *@format: list of arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int l;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	l = 0;
	while (format && format[l])
	{
		switch (format[l])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				l++;
				continue;
		}
		separator = ", ";
		l++;
	}

	printf("\n");
	va_end(args);
}
