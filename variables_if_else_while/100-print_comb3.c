#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
  int tens;
  int ones;

  for (tens = 0; tens <= 9; tens++)
    {
      for (ones = tens + 1; ones <= 9; ones++)
	{
	  putchar(tens + '0');
	  putchar(ones + '0');

	  if (tens < 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
