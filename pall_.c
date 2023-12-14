#include "monty.h"

/**
 * pall_ - prints all the values on the stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
*/

void pall_(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *itirator;

	itirator = *stack;
	while (itirator != NULL)
	{
		printf("%d\n", itirator->n);
		itirator = itirator->next;
	}

}
