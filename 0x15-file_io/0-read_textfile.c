#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters printed
 *
 * Return: number of letters printed. If fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int b_read;
	int b_write;
	char *buffer;

	if (!filename || letters == 0)
		return (0);

	file = open(filename, O_RDONLY);

	if (file < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	b_read = read(file, buffer, letters);
	close(file);
	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}

	b_write = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_write < 0)
		return (0);

	return (b_write);
}
