#include "monty.h"

/**
 * _swap - swap.
 * @stack: pointer to lists for monty stack
 * @line_number: num of line opcode occurs on
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second;

	if (*stack == NULL || (*stack)->next == NULL)
    {
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	second = top->next;
	top->prev = second;
    top->next = second->next;
    second->prev = NULL;
    second->next = top;
	if (top->next)
	{
		top->next->prev = top;
	}
}
