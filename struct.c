#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include "board0.h"
#include "board1.h"
#include "evaluate.h"

const char	*get_string(unsigned int value)
{
	if (value == 0)
	{
		return("0");
	}
	else if (value == 1)
	{
		return("1");
	}
	else if (value == 2)
	{
		return("2");
	}
	else if (value == 3)
	{
		return("3");
	}
	else if (value == 4)
	{
		return("4");
	}
	else
		return("U");
}
