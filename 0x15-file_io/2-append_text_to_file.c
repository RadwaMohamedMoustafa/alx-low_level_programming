#include "main.h"

/**
 * append_text_to_file - add text to end of file if exists
 * @filename: file name to append to it
 * @text_content: content to append
 * Return: (1) success (-1) failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1;
	int let;
	int r;

	if (filename == 0)
	{
		return (-1);
	}

	fd1 = open(filename, O_WRONLY | O_APPEND);

	if (fd1 < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
			;

		r = write(fd1, text_content, let);

		if (r < 0)
		{
			return (-1);
		}
	}

	close(fd1);

	return (1);
}
