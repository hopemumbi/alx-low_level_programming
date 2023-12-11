#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - that prints anything.
 *@format:  list of types of arguments passed to the function
 *...: other variables
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
		/*prints a comma and a space to separate the items being printed.*/
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(null)");
				}
				printf("%s", s);
				break;
			default:
				break;

		}
		i++;
	}
	va_end(args);
	printf("\n");
}
