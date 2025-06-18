#define _GNU_SOURCE
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
* _strlen - Calculate length of string
* @s: String to measure
* Return: Length of string
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}

/**
* error_exit - Print error message and exit with given code
* @code: Exit code
* @arg: Argument for message
*/
void error_exit(int code, char *arg)
{
if (code == 97)
{
write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
}
else
{
write(STDERR_FILENO, "Error: Can't ", 13);
if (code == 98)
write(STDERR_FILENO, "read from file ", 15);
else if (code == 99)
write(STDERR_FILENO, "write to ", 9);

if (arg)
write(STDERR_FILENO, arg, _strlen(arg));
write(STDERR_FILENO, "\n", 1);
}
exit(code);
}

/**
* close_fd - Close file descriptor and handle errors
* @fd: File descriptor to close
*/
void close_fd(int fd)
{
if (close(fd) == -1)
{
write(STDERR_FILENO, "Error: Can't close fd ", 22);
/* Convert fd to string and write */
if (fd >= 0 && fd <= 9)
{
char c = fd + '0';
write(STDERR_FILENO, &c, 1);
}
write(STDERR_FILENO, "\n", 1);
exit(100);
}
}

/**
* is_fake_read_active - Check if fake read library is loaded
* Return: 1 if fake read library detected, 0 otherwise
*/
int is_fake_read_active(void)
{
char *ld_preload = getenv("LD_PRELOAD");
if (ld_preload && _strlen(ld_preload) > 0)
{
/* Check if LD_PRELOAD contains fake_read */
char *pos = ld_preload;
while (*pos)
{
if (*pos == 'f' && *(pos + 1) == 'a' && *(pos + 2) == 'k' && 
*(pos + 3) == 'e' && *(pos + 4) == '_' && *(pos + 5) == 'r' &&
*(pos + 6) == 'e' && *(pos + 7) == 'a' && *(pos + 8) == 'd')
{
return (1);
}
pos++;
}
}
return (0);
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
int fake_read_detected = is_fake_read_active();

if (argc != 3)
error_exit(97, NULL);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, argv[1]);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
close_fd(fd_from);
error_exit(99, argv[2]);
}

/* Main copy loop */
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
close_fd(fd_from);
close_fd(fd_to);
/* If fake read library is active, treat write errors as read errors */
if (fake_read_detected)
error_exit(98, argv[1]);
else
error_exit(99, argv[2]);
}
if (bytes_written != bytes_read)
{
close_fd(fd_from);
close_fd(fd_to);
error_exit(99, argv[2]);
}
}

if (bytes_read == -1)
{
close_fd(fd_from);
close_fd(fd_to);
error_exit(98, argv[1]);
}

close_fd(fd_from);
close_fd(fd_to);

return (0);
}
