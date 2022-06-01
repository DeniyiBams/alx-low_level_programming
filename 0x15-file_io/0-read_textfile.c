#include "main.h"

/**
  * read_textfile - to read a text file and print to POSIX stdout
  * @filename: name of file
  * @letters: number of letters to be read and printed
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, close_check;
	char *buffer;
	ssize_t read_actual, write_actual;

	if (filename == NULL || letters <= 0)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_actual = read(fd, buffer, letters);
	if (read_actual == -1)
	{
		free(buffer);
		return (0);
	}

	close_check = close(fd);
	if (close_check == -1)
	{
		free(buffer);
		return (0);
	}

	write_actual = write(STDOUT_FILENO, buffer, read_actual);
	if (write_actual == -1 || write_actual != read_actual)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (write_actual);
}
