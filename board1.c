#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include "board1.h"

const char			*get_string(unsigned int value);

void	map_get_section2(struct s_board_t *board, unsigned int round, unsigned int *values)
{
	if (round < 12)
	{
		values[0] = (*board).values[round - 8][0];
		values[1] = (*board).values[round - 8][1];
		values[2] = (*board).values[round - 8][2];
		values[3] = (*board).values[round - 8][3];
	}
	else
	{
		values[0] = (*board).values[round - 12][3];
		values[1] = (*board).values[round - 12][2];
		values[2] = (*board).values[round - 12][1];
		values[3] = (*board).values[round - 12][0];
	}
}

void	map_get_section(struct s_board_t *board, unsigned int round, unsigned int *values)
{
	if (round < 8)
	{
		if (round < 4)
		{
			values[0] = (*board).values[0][round];
			values[1] = (*board).values[1][round];
			values[2] = (*board).values[2][round];
			values[3] = (*board).values[3][round];
		}
		else
		{
			values[0] = (*board).values[3][round - 4];
			values[1] = (*board).values[2][round - 4];
			values[2] = (*board).values[1][round - 4];
			values[3] = (*board).values[0][round - 4];
		}
	}
	else
	{
		map_get_section2(board, round, values);
	}
}

void	map_update_section2(struct s_board_t *board, unsigned int round, unsigned int *values)
{
	if (round < 12)
	{
		(*board).values[round - 8][0] = values[0];
		(*board).values[round - 8][1] = values[1];


