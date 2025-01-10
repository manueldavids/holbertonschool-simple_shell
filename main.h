#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/wait.h>

extern char **environ;

int tokenize_input(char *line, char **argv);
char *get_path_env(void);
char *find_command_in_path(char *command);
void print_env(void);
void handle_exit(char *line, char **argv);
int _fork(char *line);
char *trim_spaces(char *line);

#endif
