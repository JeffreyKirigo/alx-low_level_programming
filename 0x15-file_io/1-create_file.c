#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, letters, fwr;

	if (filename)
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	else
		return (-1);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		fwr = write(fd, text_content, letters);
	}
	else
		text_content = "";

	if (fwr == -1)
		return (-1);

	close(fd);

	return (1);
}
