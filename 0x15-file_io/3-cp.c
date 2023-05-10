#include "main.h"

/**
 * read_write_value - checks the value of
 * read and write.
 * @fd1: is a file descriptor of a file we will copy it's content.
 * @fd2: is a file to be created and recieve a text.
 * @str1: is the name of the first file.
 * @str2: is the name of the second file.
 *
 * return: void.
 */

void read_write_value(char *str1, char *str2, int fd1, int fd2)
{
	int rd, wr;
	char buff[1024];

	rd = read(fd1, buff, 1024);
	if (rd == -1)
	{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", str1);
	close(fd1);
	close(fd2);
	exit(98);
	}
	if (rd == 0)
	wr = write(fd2, buff, rd);
	if (wr == -1)
	{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", str2);
	close(fd1);
	close(fd2);
	exit(99);
	}
	}
}

/**
 * main - copies the content of one file to another
 * @ac: argument count
 * @av: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */

int main(int ac, char **av)
{
	int fd1, fd2;

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}
	fd1 = open(av[1], O_RDONLY);

	if (fd1 == -1)
	{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", av[1]);
	exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
	dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", av[2]);
	exit(99);
	}
	read_write_value(av[2], av[1], fd1, fd2);
	if (close(fd1) == -1)
	{
	dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd1);
	exit(100);
	}
	if (close(fd2) == -1)
	{
	dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd2);
	exit(100);
	}
	close(fd1);
	close(fd2);
	return (0);
}
