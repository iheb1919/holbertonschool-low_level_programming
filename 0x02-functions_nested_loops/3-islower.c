#include "holberton.h"
/**
 * _islower - checks if character is lowercase
 *
 * @c: input character tested
 *
 * Return: 1 or 0
 */
int _islower (int r)
{
  return((r >= 'a' && r <= 'z') ? 1 : 0);
}
