#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *@c: character to be checked
  *Return: 1 or 0
  */

int _isalpha(intc)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
