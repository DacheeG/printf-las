
#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @d: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *d)
{
	int curr_d = *d + 1;
	int size = 0;

	if (format[curr_d] == 'l')
		size = S_LONG;
	else if (format[curr_d] == 'h')
		size = S_SHORT;

	if (size == 0)
		*d = curr_d - 1;
	else
		*d = curr_d;

	return (size);
}


