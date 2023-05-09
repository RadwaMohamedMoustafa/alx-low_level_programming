#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd1;
	int let;
	int r;

	if (filename == 0)
		return (-1);

	fd1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd1 < -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (let = 0; text_content[let] != '\0'; let++)
		;

	r = write(fd1, text_content, let);

	if (r < 0)
	{
		return (-1);
	}

	close(fd1);

	return (1);
}
