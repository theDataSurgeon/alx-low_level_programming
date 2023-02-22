#include <stdio.h>

/**
 * postive_or_negative - checks if num is pos or negative"
 *
 * @i: accept integer to tested
 */

void positive_or_negative(int i)
{
       if (i > 0)
	       printf("%i is postive\n", i);
       else if (i == 0)
	       printf("%i is zero\n", i);
       else
	       printf("%i is negative\n", i);
}
