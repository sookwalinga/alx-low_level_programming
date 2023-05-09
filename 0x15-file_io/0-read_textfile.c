#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file & prints it to POSIX standard output
 * @filename: name of file to read
 * @letters: num of letters to read & print
 *
 * Return: actual num of letters read & printed, or 0 if file can't be opened
 * or read, or if write fails or doesn't write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (buf == NULL)
{
close(fd);
return (0);
}

n_read = read(fd, buf, letters);
if (n_read == -1)
{
close(fd);
free(buf);
return (0);
}

buf[n_read] = '\0';

n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1 || n_written != n_read)
{
close(fd);
free(buf);
return (0);
}

close(fd);
free(buf);

return (n_written);
}
