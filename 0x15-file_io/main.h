#ifndef MAIN_H
#define MAIN_H
/*
 * File: main.h
 * Auth: Naume Tsingo
 * Desc: Header file containins prototypes
  *       written in 0x14-file_io directory
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
