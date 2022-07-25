#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters, fwr;

	if (filename)
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		fwr = write(fd, text_content, letters);

		if (fwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
