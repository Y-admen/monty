#include <monty.h>

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	char line[MAX_LEN];
	unsigned int line_number = 0;
	char *opcode;
	char *arg;
	int val;
	stack_t *place;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: %s file\n", argv[0]);
	return EXIT_FAILURE;
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
	line_number++;
	opcode = strtok(line, " \t\n");
	if (!opcode || opcode[0] == '#')
	{
	continue;
	}
	arg = strtok(NULL, " \t\n");
	if (arg)
	{
	val = atoi(arg);
	}
	if (strcmp(opcode, "_push") == 0)
	{
	if (!arg || !_num(arg))
		{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		}
	_push(&stack, value, line_number);
	}
	else if (strcmp(opcode, "_pall") == 0)
		{
		place = stack;
		while (place)
			{
				printf("%d\n", place->n);
				place = place->next;
			}
		}
	else
		{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
		}
	}
	fclose(file);
	return EXIT_SUCCESS;
}
