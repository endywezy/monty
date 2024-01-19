#include "monty.h"

/**
 * _getline - This is to accepts inputes from user or file
 * @lineptr: checks the lines
 * @n: variable n
 * @stream: file stream
 * Return:  -1, or (i)
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	/*variable declaration*/
	size_t i = 0;
	int c;

	if (*lineptr == NULL)/*loop*/
	{
		*n = 0;
	}

	while ((c = fgetc(stream)) != EOF && c != '\n')
	{
	if (i >= *n)
	{
		*n += 10;
		*lineptr = realloc(*lineptr, *n);
		if (*lineptr == NULL)
		{
			perror("realloc failed");
			exit(EXIT_FAILURE);
		}
	}

	(*lineptr)[i++] = c;
	}
	if (c == EOF && i == 0)
	{
		/*No more lines to read*/
		return (-1);
	}

		/*Number of characters read that(excluding newline)*/
		return (i);
}
