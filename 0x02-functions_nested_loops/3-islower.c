#include "main.h"
/**
 * _islower - checks for lowercase char
 * @c: char to be checked
 * Return: 1 if c lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
