#ifndef EVALUATE_H
#define EVALUATE_H

void	evaluate_possibility(unsigned int round, unsigned int *possibility, struct s_board_t *candidate, struct s_resolutions_t *resolutions);

void	evaluate_candidate(unsigned int round, unsigned int value, struct s_board_t *candidate, struct s_resolutions_t *resolutions);

#endif
