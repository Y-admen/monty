#include <monty.h>

/**
 * _swap - swap.
 * @stack: pointer to lists for monty stack
 * @line_number: num of line opcode occurs on
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *top = *stack;
	*stack = top->next;

	if (top->next->next)
	{
	top->next->next->prev = top;
	}
	top->next = (*stack)->next;
	(*stack)->prev = NULL;
	(*stack)->next = top;
	top->prev = *stack;
}
