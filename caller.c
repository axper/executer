#include <stdlib.h> // system()
#include <stdio.h> // fopen()

#define FILENAME_PARAM "command.txt"
#define MAX_LENGTH 80

int quit(const char * message)
{
	printf("%s\n", message);
	printf("Press enter to exit...\n");
	getchar();
	return EXIT_FAILURE;
}

int main()
{
	char command[ MAX_LENGTH ];
	FILE * file = fopen(FILENAME_PARAM, "r");
	if (file == NULL) {
		return quit("Could not open " FILENAME_PARAM " for reading");
	}

	if (fgets(command, MAX_LENGTH, file) == NULL) {
		return quit("Error when reading command from " FILENAME_PARAM);
	}

	if (system(command) == -1) {
		return quit("Could not execute the command in " FILENAME_PARAM);
	}

	fclose(file);

	return 0;
}
