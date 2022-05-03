#include "holberton.h"

/**
* create_file - Function that creates a file
*@filename: name of the file to create
*@text_content: text to write in the file
*Return: 1 in succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, lr, c = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[c] != '\0')
		{
			c++;
		}
		lr = write(fd, text_content, c);
	}

	if (lr == -1 || lr != c)
		return (-1);

	return (1);
}
