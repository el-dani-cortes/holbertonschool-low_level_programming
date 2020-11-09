#ifndef __FILE_H_
#define __FILE_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*Function that writes the character c to stdout*/
int _putchar(char c);

/*function that reads a text file and prints it to the standard output*/
ssize_t read_textfile(const char *filename, size_t letters);

/*Function that creates a file*/
int create_file(const char *filename, char *text_content);

/*Function that appends text at the end of a file*/
int append_text_to_file(const char *filename, char *text_content);

#endif /*FILE_H*/
