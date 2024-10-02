#include "misc.h"

const	char *get_string(unsigned int value)
{
	static const *values[] = {"0", "1", "2", "3", "4", "U"};
	if (values <= 4)
	{
		return values[value];
	}

	return (values[5]);
}
