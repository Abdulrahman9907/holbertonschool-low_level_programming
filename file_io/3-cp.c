#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* error_exit - Print error message and exit with given code
* @code: Exit code
* @message: Error message format
* @arg: Argument for message
*/
void error_exit(int code, char *message, char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(code);
}

/**
* close_fd - Close file descriptor and handle errors
* @fd: File descriptor to close
*/
void close_fd(int fd)
{
if (close(fd) == -1)
error_exit(100, "Error: Can't close fd %d\n", (char *)(long)fd);
}

/**
* main - Copy content of one file to another
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, exit with error code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", "");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
close_fd(fd_from);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close_fd(fd_from);
close_fd(fd_to);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}

if (bytes_read == -1)
{
close_fd(fd_from);
close_fd(fd_to);
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

close_fd(fd_from);
close_fd(fd_to);

return (0);
}
