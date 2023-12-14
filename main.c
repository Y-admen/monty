#include <monty.h>

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	char line[MAX_LEN];
	unsigned int line_number = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: %s file\n", argv[0]);
	return EXIT_FAILURE;
	}
	file = fopen(filename, "r");
	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
	line_number++;
	pro_line(&stack, line, line_number);
	}
	fclose(file);
	return EXIT_SUCCESS;
}
