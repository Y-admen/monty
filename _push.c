#include "monty.h"

/**
 * _push - push int to a stack
 * @stack: linked lists for monty stack
 * @line_number: number of line opcode occurs on
 * @arg: data to be added
*/

void _push(stack_t **top, unsigned int line_number, char *arg)
{
	int data;
	char *end;
	stack_t *new_node;

	strtol(arg, &end, 10);
	if (!arg || end == arg || *end != '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	data = atoi(arg);
	new_node->n = data;
	new_node->prev = NULL;

	if (*top == NULL)
	{
		new_node->next = NULL;
		*top = new_node;
	}
	else
	{
		new_node->next = *top;
		(*top)->prev = new_node;
		*top = new_node;
	}
}
