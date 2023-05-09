#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * cp - copies the content of a file to another file
 * @from: the name of the file to copy from
 * @to: the name of the file to copy to
 *
 * Return: 0 on success, otherwise an error code
 */
int cp(const char *from, const char *to)
{
int fd_from, fd_to, rd_count, wt_count;
char buffer[BUFFER_SIZE];

/* Open the source file */
fd_from = open(from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
return (98);
}

/* Open the destination file */
fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
return (99);
}

/* Copy the contents of the source file to the destination file */
while ((rd_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
wt_count = write(fd_to, buffer, rd_count);
if (wt_count == -1 || wt_count != rd_count)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
return (99);
}
}

if (rd_count == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
return (98);
}

/* Close the source file */
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
return (100);
}

/* Close the destination file */
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
return (100);
}

return (0);
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, otherwise an error code
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}

return (cp(argv[1], argv[2]));
}
