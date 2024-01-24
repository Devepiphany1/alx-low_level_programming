#include "function_pointers.h"
#include <stdio.h>
	/**
	 * print_name - pointer to function prints a name
	 * @name: first paramater
	 * @f: second paramater
	 * Return: 0
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}

