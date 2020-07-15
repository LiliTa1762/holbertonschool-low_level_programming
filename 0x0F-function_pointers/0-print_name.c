#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - print a name
 *@name: name
 *@f: pointer function
 *return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
