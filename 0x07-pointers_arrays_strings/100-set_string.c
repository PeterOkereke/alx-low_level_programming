#include "main.h"

/**
 * set_string - Sets the value of a pointer to a character.
 * @s: pointer to pointer
 * @to: pointer to char.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
