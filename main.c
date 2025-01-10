#include "main.h"

/**
 * main - Entry point for a simple shell program
 *
 * Description: The function provides a loop acts as a command-line
 * interface for the user, it will read commands from standart input,
 * removes unnecessary whitespaces, and passes input to '_fork' for execution.
 *
 * Return: exit_status
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	int exit_status = 0;

	while (1)
	{
		if (isatty(STDIN_FILEO))
			printf("($) ");

		nread = getline(&line, &len, stdin);
		if (nread == -1)
		{
			if (isatty(STDIN_FILENO))
				printf("\n");

			break;
		}

		line[strlen(line, "\n")] = '\0';

		if (sterlen(line) == 0)
			continue;

		exit_status = _fork(line);
	}

	free(line);

	return (exit_status);
}
