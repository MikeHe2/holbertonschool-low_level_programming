#include "3-calc.h"

/**
 * get_op_func - Select the operation given by the user.
 *
 * @s: The operator given by the user.
 *
 * Return: A pointer to the function corresponding to
 * the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}



