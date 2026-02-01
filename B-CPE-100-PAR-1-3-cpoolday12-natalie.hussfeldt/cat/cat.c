/*
** EPITECH PROJECT, 2024
** cat
** File description:
** cat command
*/
#include "my.h"
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

static void my_putstr_stderr(char *str)
{
    while (*str) {
        write(2, str, 1);
        str++;
    }
}

static int display_error_message(char *filename, int error_code)
{
    my_putstr_stderr("cat: ");
    my_putstr_stderr(filename);
    if (error_code == ENOENT) {
        my_putstr_stderr(": no such file or directory\n");
    } else if (error_code == EISDIR) {
        my_putstr_stderr(": is a directory\n");
    } else {
        my_putstr_stderr(": unknown error\n");
    }
    return error_code;
}

static int process_file(char *filename)
{
    char buffer[BUFFER];
    int file_descriptor = open(filename, O_RDONLY);
    ssize_t br = read(file_descriptor, buffer, BUFFER);

    if (file_descriptor == -1) {
        return display_error_message(filename, errno);
    }
    while (br > 0) {
        write(1, buffer, br);
        br = read(file_descriptor, buffer, BUFFER);
    }
    if (br == -1 || close(file_descriptor) == -1) {
        display_error_message(filename, errno);
    }
    return 0;
}

static int read_files(int argc, char **argv)
{
    for (int i = 1; i < argc; i++) {
        process_file(argv[i]);
    }
    return 0;
}

static void read_from_stdin(void)
{
    char buffer[BUFFER];
    ssize_t br = read(0, buffer, BUFFER);

    while (br > 0) {
        write(1, buffer, br);
        br = read(0, buffer, BUFFER);
    }
}

int main(int argc, char **argv)
{
    if (argc <= 1) {
        read_from_stdin();
    } else {
        read_files(argc, argv);
    }
    return 0;
}
