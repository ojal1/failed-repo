#include "main.h"
/**
 *_isupper - print 1 if c is uppercase
 *@c: stored value int for comparing if c is upper
 *Return: 1 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
