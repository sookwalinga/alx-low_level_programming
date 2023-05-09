#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * open_source_file - opens the source file for copying
 * @from: name of the file to copy from
 *
 * Return: file descriptor on success, otherwise exits with error code
 */
int open_source_file(const char *from)
{
int fd_from = open(from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
exit(98);
}
return (fd_from);
}

/**
 * open_destination_file - opens the destination file for copying
 * @to: name of the file to copy to
 *
 * Return: file descriptor on success, otherwise exits with error code
 */
int open_destination_file(const char *to)
{
int fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
exit(99);
}
return (fd_to);
}

/**
 * copy_file - copies the contents of a file to another file
 * @from: name of the file to copy from
 * @to: name of the file to copy to
 *
 * Return: 0 on success, otherwise exits with error code
 */
int copy_file(const char *from, const char *to)
{
int fd_from = open_source_file(from);
int fd_to = open_destination_file(to);
ssize_t rd_count, wt_count;
char buffer[BUFFER_SIZE];
while ((rd_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
wt_count = write(fd_to, buffer, rd_count);
if (wt_count == -1 || wt_count != rd_count)
{
dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
exit(99);
}
}
if (rd_count == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
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

return (copy_file(argv[1], argv[2]));
}
