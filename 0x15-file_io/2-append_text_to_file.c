#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file to append string
 * @text_content: text to append into file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, len, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content ==  NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	bytes_written = write(fd, text_content, len);
	close(fd);
	if (bytes_written == -1)
		return (-1);
	return (1);
}
