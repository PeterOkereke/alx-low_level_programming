#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: letter to check for.
 * Return: 1 if letter is uppercase or lowercase, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
