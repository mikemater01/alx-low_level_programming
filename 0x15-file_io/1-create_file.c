#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @content: 
 *
 * Return: 1 on  success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file;
	ssize_t b_write;
	size_t length;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	b_write = 0;
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		b_write = write(file, text_content, length);
	}
	close(file);
	if (b_write == -1)
		return (-1);

	return (1)
}
