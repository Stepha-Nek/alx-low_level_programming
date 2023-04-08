#include "main.h"
/**
 * append_text_to_file - function adds text to the end of a file
 * @filename: filename used/given
 * @text_content: text content in file
 *
 * Return: 1 if successful, -1 if not or file non exsistent
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_letters, rwr;

	if (filename == 0)
	{
		return (-1);
	}

	fd = open(filename,  O_WRONLY | O_APPEND);

	if (text_content != 0)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		rwr = write(fd, text_content, num_letters);

		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}

