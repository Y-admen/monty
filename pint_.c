#include "monty.h"

/**
 * _pint - prints the value at the top of the stack.
 *
 * @stack: pointer to linked list stack.
 * @line_number: number of line opcode occur.
*/
void pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	printf("%d\n", (*top)->n);
}
