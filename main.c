#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t **stack = NULL;
	char line[MAX_LEN];
	unsigned int line_number = 0;
	char *opcode;
	char *arg;

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
	opcode = strtok(line, " \t\n");
	if (!opcode || opcode[0] == '#')
	{
	continue;
	}
	arg = strtok(NULL, " \t\n");
	if (strcmp(opcode, "_push") == 0)
	{
	if (!arg || !_num(arg))
		{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		}
	_push(stack, line_number, arg);
	}
	else if (strcmp(opcode, "_pall") == 0)
		{
		_pall(stack, line_number);
		}
	else if (strcmp(opcode, "_pint") == 0)
		{
		_pint(stack, line_number);
		}
	else if (strcmp(opcode, "_pop") == 0)
		{
		_pop(stack, line_number);
		}
	else if (strcmp(opcode, "_swap") == 0)
		{
		_swap(stack, line_number);
		}
	else if (strcmp(opcode, "_add") == 0)
		{
		_add(stack, line_number);
		}
	else if (strcmp(opcode, "_nop") == 0)
		{
		_nop(stack, line_number);
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
