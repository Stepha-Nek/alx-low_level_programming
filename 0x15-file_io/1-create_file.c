#include "main.h"
/**
 * create_file - function creates a file
 * @filename: filname given
 * @text_content: file contents
 *
 * Return: 1 if successful, -1 if it was not successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_letters, rwr;

	if (filename == 0)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == 0)
	{
		text_content = " ";
	}
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rwr = write(fd, text_content, num_letters);

	if (rwr == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);

}
