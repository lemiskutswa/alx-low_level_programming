#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: name of file.
 * @test_content: content to write to file.
 * Return: int, 1, on success.
 *           0, on failure.
 */

int create_file(const char *filename, char *test_content)
{
	size_t i;
	int fd, err_check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (test_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = 0;
	while (test_content[i])
		i++;
	err_check = write(fd, test_content, i);
	close(fd);
	if (err_check == -1)
		return (-1);
	return (1);
}
