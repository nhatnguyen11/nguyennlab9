#include "utils.h"

void stripCarriageReturn(char * array)
{
	int x = 0;
	while (array[x] != '\0' && x < strlen(array))
	{
		if(array[x] == '\r')
			array[x] = '\0';

		else if(array[x] == '\n')
			array[x] = '\0';

		x++;

	}// end while
}// end function



