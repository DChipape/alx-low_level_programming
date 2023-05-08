#include "main.h"
/**
*_memset - Fill memory with a specific value 
*@s: Starting address of memory to be filled
*@b: desired value
*@n: Bytes number to be changed
*Return: Changed array with new value for
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
s[i] = b;
n--;
}
return (s);
}
