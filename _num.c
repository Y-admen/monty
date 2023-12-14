#include <monty.h>

int _num(const char *i)
{
	while (*i)
	{
	if (*i < '0' || *i > '9')
		{
			return 0;
		}
	i++;
	}
	return 1;
}
