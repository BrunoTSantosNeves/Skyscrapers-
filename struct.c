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

void	solve_round(unsigned int, unsigned int value, struct s_resolutions_t *candidates, struct s_resolutions_t *resolutions)
{
	struct s_board_t	*candidate;
	struct s_board_		*next_candidate;

	candidate = candidates->first;

