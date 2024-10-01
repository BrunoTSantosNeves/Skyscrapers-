#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include "board0.h"
#include "board1.h"
#include "evaluate.h"

const char	*get_string(unsigned int value)
{
	static const char *values[] = {"0", "1", "2", "3", "4", "U"};
	if (value <= 4)
		return values[value];

	return values[5];
}

void	solve_round(unsigned int, unsigned int value, struct s_resolutions_t *candidates, struct s_resolutions_t *resolutions)
{
	struct s_board_t	*candidate;
	struct s_board_		*next_candidate;

	candidate = candidates->first;
	while (candidate != NULL && ((next_candidate = candidate->next) || 1)
			evaluate_candite(round, value, candidate, resolutions);
			free(candidate);
			candidate = next_candidate;
}

struct s_board_t	*solve(struct s_conditions_t *conds)
{
	struct s_resolutions_t	candidates;
	struct s_resolutions_t	resolutions;
	struct s_board_t	*initial_map;
	unsigned int	r;

	initial_map = malloc(sizeof(struct s_board_t));
	map_init(initial_map);
	solutions_init(&candidates);
	solutions_append(&candidates, initial_map);
	r = 0;

	while(r < 16)
	{
		resolutions_init(&resolutions);
		solve_round(r, conds->values[r], &candidates, &resolutions);
		if (solutions.first == NULL)
		{
			return (NULL);
		}
		candidates = resolutions;
		r++;
	}
	return (resolutions.first);
}

void	parse_consitions(char *cmdline, struct s_conditions_t *conds)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while ((cmdline[i] >= '0' && cmdline[i] <= '9') || cmdline[i] == ' ')
	{
		if (cmdline[i] >= '0' && 

