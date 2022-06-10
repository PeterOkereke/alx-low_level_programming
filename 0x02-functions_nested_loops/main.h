#ifndef _main_h_
#define _main_h_

int _putchar(char);
/**
 * putchar - Prints putchar to stdout
 * followed by a new line.
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
/**
 * print_alphabet - Prints letters in lowercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int _islower(int c);
/**
 * _islower - Checks for lowercase letter
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _isalpha(int c);
/**
 * _isalpha - Checks for alphabetic character
 * Uppercase or lowercase
 * Return: 1 if c is uppercase or lowercase, otherwise 0.
 */

int print_sign(int n);
/**
 * print_sign - Prints the sign of a number.
 * Return: 1 and prints + if n is greater than 0.
 * Return: 0 and prints 0 if n is equal to zero.
 * Retun: -1 and prints - if n is less than 0.
 */

int _abs(int);
/**
 * _abs - Computes the absolute value of an integer.
 * Return: Always 0.
 */

int print_last_digit(int);
/**
 * print_last_digit - Prints the last digit of a number
 * Return: value of the last digit.
 */

void jack_bauer(void);
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 */

void times_table(void);
/**
 * times_table - Prints the 9 times table
 * starting with zero
 */

int add(int, int);
/**
 * add - Adds two integers
 * Return: the result of two integers.
 */

void print_to_98(int n);
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: number to print from.
 */

#endif
