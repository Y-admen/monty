#include "monty.h"

/**
 * _add -  add
 * @stack: ptr to lists for monty stack
 * @line_number: num of line opcode occurs on
*/
void _add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_number);
}
