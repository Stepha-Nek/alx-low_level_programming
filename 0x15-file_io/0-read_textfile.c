#include "main.h"
/**
 * read_textfile - function reads text file
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd, num_wr;
	char *tmp_str;

	if (filename == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	tmp_str = malloc(sizeof(char) * letters);
	if (tmp_str == 0)
	{
		return (0);
	}

	num_rd = read(fd, tmp_str, letters);
	num_wr = write(STDOUT_FILENO, tmp_str, num_rd);

	close(fd);

	free(tmp_str);

	return (num_wr);
}
