#include "main.h"

/**
 * read_textfile - read filename and print (letters count)
 * @filename: path of file
 * @letters: number of chars to print from it
 * Return: number printed
 * if (file doesn't exist - fail to open return 0)
 * if actual printed is different than actual read return 0
 * if actual printed is different than letters return actual printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1;
	ssize_t len1, len2;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd1 = open(filename, O_RDONLY);
	if (fd1 < 0)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd1);
		return (0);
	}
	len1 = read(fd1, buffer, letters);
	close(fd1);
	if (len1 < -1)
	{
		free(buffer);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buffer, len1);
	free(buffer);
	if (len1 != len2)
	{
		return (0);
	}
	return (len2);
}
