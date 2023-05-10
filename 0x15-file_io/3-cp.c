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
	if (rd)
	{
	if (rd == -1)
	{
	dprintf(STDERR_FILENO, "%s %s", "Error: Can't read from file \n", str1);
	close(fd1);
	close(fd2);
	exit(98);
	}
	wr = write(fd2, buff, rd);
	if (wr == -1)
	{
	dprintf(STDERR_FILENO, "%s %s", "Error: Can't write to \n", str2);
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
	dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to \n");
	exit(97);
	}
	fd1 = open(av[1], O_RDONLY);

	if (fd1 == -1)
	{
	dprintf(STDERR_FILENO, "%s %s", "Error: Can't read from file \n", av[1]);
	exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
	dprintf(STDERR_FILENO, "%s %s", "Error: Can't write to \n", av[2]);
	exit(99);
	}
	read_write_value(av[2], av[1], fd1, fd2);
	if (close(fd1) == -1)
	{
	dprintf(STDERR_FILENO, "%s %d", "Error: Can't close fd \n", fd1);
	exit(100);
	}
	if (close(fd2) == -1)
	{
	dprintf(STDERR_FILENO, "%s %d", "Error: Can't close fd \n", fd2);
	exit(100);
	}
	close(fd1);
	close(fd2);
	return (0);
}
