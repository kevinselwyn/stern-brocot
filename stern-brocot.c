#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://oeis.org/A002487

#define START 1
#define LIMIT 100

static void usage() {
	printf("stern-brocot (<start> <limit>)\n");
	printf("             -h|--help\n");
}

int main(int argc, char *argv[]) {
	int rc = 0, start = START, limit = LIMIT, counter = 0, i = 0, l = 0;
	int *sequence = NULL;

	if (argc >= 2) {
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
			usage();

			rc = 1;
			goto cleanup;
		}

		start = atoi(argv[1]);
	}

	if (argc >= 3) {
		limit = atoi(argv[2]);
	}

	sequence = malloc(sizeof(int) * limit + 1);

	sequence[counter++] = start;
	sequence[counter++] = start;

	for (i = 0, l = limit; i < l; i++) {
		sequence[counter++] = sequence[i] + sequence[i + 1];
		sequence[counter++] = sequence[i + 1];
	}

	for (i = 0, l = limit; i < l; i++) {
		printf("%d\n", sequence[i]);
	}

cleanup:
	if (sequence) {
		free(sequence);
	}

	return rc;
}