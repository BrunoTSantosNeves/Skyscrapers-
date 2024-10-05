#ifndef BOARD1_H
#define BOARD1_H

#include "struct.h"

void	map_get_section2(struct s_board_t *board, unsigned int round, unsigned int *values);

void	map_get_section(struct s_board_t *board, unsigned int round, unsigned int *values);

void	map_update_section2(struct s_board_t *board, unsigned int round, unsigned int *values);

void	map_update_section(struct s_board_t *board, unsigned int round, unsigned int *values);

void	map_init(struct s_board_t *board);

#endif
