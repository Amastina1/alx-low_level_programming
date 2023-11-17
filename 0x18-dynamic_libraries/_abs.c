#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@n: function parameter
  *Return: -n or n;
  */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
