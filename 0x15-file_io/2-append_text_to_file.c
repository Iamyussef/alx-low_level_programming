#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to appened
 * Return: 1 on success, or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int bytes = 0;
	int len = 0;

		if (filename == NULL)
			return (-1);

		if (text_content != NULL)
		{
			while (text_content[len] != '\0')
				len++;
		}
	fl = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fl, text_content, len);

		if (fl == -1 || bytes == -1)
			return (-1);
	close(fl);

	return (1);
}
