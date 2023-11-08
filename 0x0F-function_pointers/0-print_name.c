#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name using pointer to function.
 * @name: String to be add.
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	ptr(name);
}
