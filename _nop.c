#include "monty.h"

/**
 * _nop -  doesn’t do anything.
 * @stack: ptr to lists for monty stack
 * @line_number: num of line opcode occurs on
*/
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
