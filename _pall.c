#include "monty.h"

/**
 * pall_ - prints all the values on the stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
*/

void _pall(stack_t **top, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *itirator;

	itirator = *top;
	while (itirator != NULL)
	{
		printf("%d\n", itirator->n);
		itirator = itirator->next;
	}

}
