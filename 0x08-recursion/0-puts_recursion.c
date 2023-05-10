#include "main.h"
/**
* _puts_recursion - print a string function, like puts();
* @s: string to be printed
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
