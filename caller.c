#include <stdlib.h> // system()
#include <stdio.h> // fopen()

#define FILENAME_PARAM "command.txt"
#define MAX_LENGTH 80

int main()
{
	char command[ MAX_LENGTH ];
	FILE * file = fopen(FILENAME_PARAM, "r");
	if (file == NULL) {
		printf("Could not open " FILENAME_PARAM " for reading\n");
		printf("Press enter to exit...\n");

		getchar();
		return 0;
	}

	if (fgets(command, MAX_LENGTH, file) == NULL) {
		printf("Error when reading from " FILENAME_PARAM "\n");
		printf("Press enter to exit...\n");

		getchar();
		return 0;
	}

	system(command);

	fclose(file);

	return 0;
}
