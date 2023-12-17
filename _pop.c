#include "monty.h"

/**
 * _pop -  pop
 * @stack: ptr to lists for monty stack
 * @line_number: num of line opcode occurs on
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	*stack = top->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(top);
}
